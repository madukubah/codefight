#include<iostream>

using namespace std;

void printbit(int number){
    for(int i=31; i>=0; i--){
        cout<<((number >> i) &1);
    }
    cout<<" = "<<number ;
    cout<<endl;
}
int secondRightmostZeroBit(int n) {

    printbit(n);
    printbit((n+1));
    printbit((n^(n+1)));
    printbit(~(n^(n+1)));cout<<"first zero"<<endl;
    printbit(-~(n^(n+1)));
    printbit(-~(n^(n+1))/2);cout<<"hasil 1 kali"<<endl;
    printbit(n);
    printbit(n-~(n^(n+1))/2);
    int x = (n-~(n^(n+1))/2);
    printbit(-~(x^(x+1))/2);cout<<"hasil 2 kali"<<endl;
    int y = (x-~(x^(x+1))/2);
    printbit(-~(y^(y+1))/2);cout<<"hasil 3 kali"<<endl;
  return 1 ;
}
/*
BEST
int secondRightmostZeroBit(int n) {
  return n |= ~n & -~n, ~n & -~n;
}
*/
//mencari angka nol yang kedua (baca deskripsi baik baik)
int main(){
    secondRightmostZeroBit(37);
    printbit(37);
}
