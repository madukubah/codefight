/*
A little boy is studying arithmetics. He has just learned how to add two integers, written one below another, column by column. But he always forgets about the important part - carrying.

Given two integers, find the result which the little boy will get.

Note: the boy used this site as the source of knowledge, feel free to check it out too if you are not familiar with column addition.

Example

For param1 = 456 and param2 = 1734, the output should be
additionWithoutCarrying(param1, param2) = 1180.

   456
  1734
+ ____
  1180
The little boy goes from right to left:

6 + 4 = 10 but the little boy forgets about 1 and just writes down 0 in the last column
5 + 3 = 8
4 + 7 = 11 but the little boy forgets about the leading 1 and just writes down 1 under 4 and 7.
There is no digit in the first number corresponding to the leading digit of the second one, so the little boy imagines that 0 is written before 456. Thus, he gets 0 + 1 = 1.
Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] integer param1

A non-negative integer.

Guaranteed constraints:
0 ≤ param1 ≤ 99999.

[input] integer param2

A non-negative integer.

Guaranteed constraints:
0 ≤ param2 ≤ 59999.
*/
#include<iostream>
using namespace std;
int additionWithoutCarrying(int param1, int param2) {
    int result =0;
    int kelipatan=1;
    while ( !(param1 %10 ==0 && param2 %10 ==0 ) ){
        result += kelipatan *( ((param1 % 10) + (param2 % 10)) % 10 ) ;
        cout<<param1<<" "<<param2<<endl;
        cout<<param1 %10 <<" "<<param2%10<<endl;
        cout<<( ((param1 % 10) + (param2 % 10)) % 10 ) <<endl;
        cout<<kelipatan<<endl;
        cout<<result<<endl;
        cout<<"======================"<<endl;

        param1 /=10, param2 /=10;
        kelipatan*=10;
    }
    return result;
}

/*
int additionWithoutCarrying(int param1, int param2) {
    int r = 0;
    for (int d = 1; param1 | param2; param1 /= 10, param2 /= 10, d *= 10) {
        r += (param1 % 10 + param2 % 10) % 10 * d;
    }
    return r;
}

*/

int main(){
    cout<<additionWithoutCarrying(456 , 1734);
}
