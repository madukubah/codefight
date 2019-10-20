/*
T9 is a system used in mobile phones with numeric keypads, that uses a predictive algorithm to help make texting faster.
*/
#include<iostream>
#include<cstring>
#include<math.h>
#include <locale>
using namespace std;

std::string teeNine(std::string message) {
    std::locale loc;
    for (std::string::size_type i=0; i<message.length(); ++i)
        message[i] = std::tolower(message[i],loc);

    string t9[] = {
        "abc","def","ghi","jkl","mno","pqrs", "tuv", "wxyz"
    };
    string result;
    int key = 0;
    int hit=0;
    int a;
    int b=0;
    for(int i=0; i<message.length(); i++){
        if( 'a' <= message[i] && message[i] <= 'o'){
            a =(int)  ceil( ( double( message[i] ) -96 )/3 );
            // cout<<a<<endl;
            if( a != key ){
                if( key !=0 ){
                    result.push_back(t9[key-1][(hit-1)%3]);
                    b=0;
                }

                key = a;
                hit =1 ;
            }else{
                hit++;
            }
        }
        else if( 'p' <= message[i] && message[i] <= 'z' ){
            if( 'p' <= message[i] && message[i] <= 's' )   a = 6;
            if( 't' <= message[i] && message[i] <= 'v' )   a = 7;
            if( 'w' <= message[i] && message[i] <= 'z' )   a = 8;
            cout<<a<<endl;
            if( a != key ){
                // cout<<"a"<<endl;
                if( key !=0){
                    // cout<<"b"<<endl;
                    if( a == 7){
                        b=0;
                        result.push_back(t9[key-1][(hit-1)%3]);
                    }
                    else{
                        b=1;
                        result.push_back(t9[key-1][(hit-1)%4]);
                    }
                }
                key = a;
                hit =1 ;
            }else{
                hit++;
            }
        }else{
          if( key !=0 ){
                // cout<<"b"<<endl;
                if( a != 8 || a != 6 ){
                    b=0;
                    result.push_back(t9[key-1][(hit-1)%3]);
                }
                else{
                    b=1;
                    result.push_back(t9[key-1][(hit-1)%4]);
                }
          }
          result.push_back(message[i]);
          hit =0;
          key =0;
        }

        cout<<result<<endl;
    }
    if( 'a' <= message[message.length()-1] && message[message.length()-1] <= 'z'){
        if(b) result.push_back(t9[key-1][(hit-1)%4]);
        else result.push_back(t9[key-1][(hit-1)%3]);
    }
    return result;
}
int main(){
    cout<<teeNine("may be the force with you");
}
