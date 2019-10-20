#include <iostream>
#include <vector>

using namespace std;

std::string messageFromBinaryCode(std::string code)
{
    string result;
    int x =0 ;
    for( int i=0 ; i< code.size()-1;  i+=8 )
    {
        x =0 ;
        for(int j=0; j< 8; j++ )
        {
            int a = (  (int) code[ i + j ] - '0' ) ;
            //cout<<a<<" ";
            x =   ( x << 1 ) | (a);
            //x = x << ( 1 );
        }
        cout<<x<<" ";
        result.push_back( (char)x );
    }
    return result;
}

int main(){
    cout<<messageFromBinaryCode("010010000110010101101100011011000110111100100001");
}



