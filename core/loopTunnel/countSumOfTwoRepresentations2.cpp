#include<iostream>
/*
Given integers n, l and r, find the number of ways to represent n as a sum of two integers A and B such that l ≤ A ≤ B ≤ r.

Example

For n = 6, l = 2 and r = 4, the output should be
countSumOfTwoRepresentations2(n, l, r) = 2.

There are just two ways to write 6 as A + B, where 2 ≤ A ≤ B ≤ 4: 6 = 2 + 4 and 6 = 3 + 3.

Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] integer n

A positive integer.

Guaranteed constraints:
5 ≤ n ≤ 109.

[input] integer l

A positive integer.

Guaranteed constraints:
1 ≤ l ≤ r.

[input] integer r

A positive integer.

Guaranteed constraints:
l ≤ r ≤ 109,
r - l ≤ 106.

[output] integer
*/
using namespace std;
int countSumOfTwoRepresentations2(int n, int l, int r) {
       int count = 0;
    for(int i=l; i<=r; i++){
        if( l <= (n-i) && (n-i) <= r && (n-i) >= i ){
                count ++;
        }
    }

    return count;
}
/*
BEST!!!
int countSumOfTwoRepresentations2(int n, int l, int r) {
    if (2*l > n) return 0;
    if (2*r < n) return 0;
    l = std::max(l, n-r);
    return n / 2 - l + 1;
}
*/

int main(){
    cout<<countSumOfTwoRepresentations2(6, 2, 4);
}
