
/*
You have k apple boxes full of apples. Each square box of size m contains m × m apples. You just noticed two interesting properties about the boxes:

The smallest box is size 1, the next one is size 2,..., all the way up to size k.
Boxes that have an odd size contain only yellow apples. Boxes that have an even size contain only red apples.
Your task is to calculate the difference between the number of red apples and the number of yellow apples.

Example

For k = 5, the output should be
appleBoxes(k) = -15.

There are 1 + 3 * 3 + 5 * 5 = 35 yellow apples and 2 * 2 + 4 * 4 = 20 red apples, making the answer 20 - 35 = -15.

Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] integer k

A positive integer.

Guaranteed constraints:
1 ≤ k ≤ 40.
*/
#include<iostream>
using namespace std;
int appleBoxes(int k) {
    int result = 0;
    int  b =0 ,a=0;
    for(int i=1; i<=k; i++){
        if(i % 2 ){
            b+= i*i;
        }else{
            a += i*i;
        }
    }
    return a-b;
}




/*
int appleBoxes(int k) {
    return k * (k + 1) / (k % 2 ? -2 : 2);
}
*/
