#include <iostream>

using namespace std;
int killKthBit(int n, int k) {
  return n & ~(1 << (k - 1)) ;
}
int main(){
    cout<<sizeof(int)<<endl;
    cout<<killKthBit(37, 3);
}
