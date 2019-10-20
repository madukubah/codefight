#include<iostream>
/*
Reverse the order of the bits in a given integer.

Example

For a = 97, the output should be
mirrorBits(a) = 67.

97 equals to 1100001 in binary, which is 1000011 after mirroring, and that is 67 in base 10.

For a = 8, the output should be
mirrorBits(a) = 1.

Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] integer a

Guaranteed constraints:
5 ≤ a ≤ 105.

[output] integer
*/

using namespace std;
int mirrorBits(int a) {
    int b = 0;
    while (a > 0) {
        b <<= 1;
        b |= a & 1;
        a >>= 1;
    }

    return b;
}
/*
int mirrorBits(int a) {
    int r = 0;
    for (; a; a >>= 1)
        r = r << 1 | a & 1;
    return r;
}

*/
int main(){
    int a=2;
    a = a &1;
    cout<<a<<endl;
    cout<<mirrorBits(8);
}
