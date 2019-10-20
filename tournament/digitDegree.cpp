#include<iostream>
#include<math.h>

using namespace std;

int digitDegree(int n) {
    int  digit= log10(n)+1;
    if( digit ==1) return 0;
    int i=0;
    int result=n;
    while(digit !=1){
        i++;
        int tmp= result;
        result=0;
        while(tmp){
            result+=tmp%10;
            tmp/=10;
        }
        cout<<result<<endl;
        digit= log10(result)+1;
    }
    return i;
}


int main(){
    cout<<digitDegree(92);
}
