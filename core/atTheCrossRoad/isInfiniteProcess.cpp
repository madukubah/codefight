#include<iostream>
using namespace std;

/*
Given integers a and b, determine whether the following pseudocode results in an infinite loop

while a is not equal to b do
  increase a by 1
  decrease b by 1
Assume that the program is executed on a virtual machine which can store arbitrary long numbers and execute forever.

Example

For a = 2 and b = 6, the output should be
isInfiniteProcess(a, b) = false;
For a = 2 and b = 3, the output should be
isInfiniteProcess(a, b) = true.
Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] integer a

Guaranteed constraints:
0 ≤ a ≤ 20.

[input] integer b

Guaranteed constraints:
0 ≤ b ≤ 20.

[output] boolean

true if the pseudocode will never stop, false otherwise.


bool isInfiniteProcess(int a, int b) {
    return a > b || (b - a) % 2 == 1  ;
}

*/
bool isInfiniteProcess(int a, int b) {
    if(a == b)return false;
    if(a+1 >= b-1){
        return true;
    }else{
         if((a+b)%2 == 0 ){
            return false;
        }else{
            return true;
        }
    }
}
