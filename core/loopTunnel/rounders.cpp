/*
We want to turn the given integer into a number that has only one non-zero digit using a tail rounding approach. This means that at each step we take the last non 0 digit of the number and round it to 0 or to 10. If it's less than 5 we round it to 0 if it's larger than or equal to 5 we round it to 10 (rounding to 10 means increasing the next significant digit by 1). The process stops immediately once there is only one non-zero digit left.

Example

For value = 15, the output should be
rounders(value) = 20;

For value = 1234, the output should be
rounders(value) = 1000.

1234 -> 1230 -> 1200 -> 1000.

For value = 1445, the output should be
rounders(value) = 2000.

1445 -> 1450 -> 1500 -> 2000.

Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] integer value

A positive integer.

Guaranteed constraints:
1 ≤ value ≤ 108.

[output] integer

The rounded number.
*/
#include<iostream>

using namespace std;
int rounders(int value) {
    int i =1;
    while( value/10 !=0){
        value = (value/10) +  ( (value%10)/5) ;
        i*=10;
    }
    return value*i;
}
/*
int rounders(int value) {
    if (value < 10) return value;
    return rounders(value/10+(value%10>=5?1:0))*10;
}
*/
int main(){

}
