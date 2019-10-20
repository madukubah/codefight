#include<iostream>

using namespace std;
void printbit(int number){
    for(int i=31; i>=0; i--){
        cout<<((number >> i) &1);
    }
    cout<<" = "<<number ;
    cout<<endl;
}
/*
BEST!!!
int equalPairOfBits(int n, int m) {
  return n ^= m, ~n & -~n;
}
*/
int equalPairOfBits(int n, int m) {
    printbit( ~(n^m) & ((n^m) + 1) );
  return ~(n^m) & ((n^m) + 1) ;
}

int main(){
    equalPairOfBits(8, 9);
}
