/*
Define an integer's roundness as the number of trailing zeroes in it.

Given an integer n, check if it's possible to increase n's roundness by swapping some pair of its digits.

Example

For n = 902200100, the output should be
increaseNumberRoundness(n) = true.

One of the possible ways to increase roundness of n is to swap digit 1 with digit 0 preceding it: roundness of 902201000 is 3, and roundness of n is 2.

For instance, one may swap the leftmost 0 with 1.

For n = 11000, the output should be
increaseNumberRoundness(n) = false.

Roundness of n is 3, and there is no way to increase it.

Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] integer n

A positive integer.

Guaranteed constraints:
100 ≤ n ≤ 109.

[output] boolean
*/
#include<iostream>

using namespace std;
bool increaseNumberRoundness(int n) {
      bool gotToSignificant = false;
  while (n > 0) {
    if (n % 10 == 0 && gotToSignificant) {
      return true;
    } else if (n % 10 != 0) {
      gotToSignificant = true;
    }
    n /=  10 ;
  }

  return false;
}

/*
bool increaseNumberRoundness(int n) {
    while (n%10==0)
        n/=10;
    while (n%10)
        n/=10;
    return n;
}

*/
int main(){

}
