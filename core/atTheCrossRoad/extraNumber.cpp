#include<iostream>
using namespace std;
/*
You're given three integers, a, b and c. It is guaranteed that two of these integers are equal to each other. What is the value of the third integer?

Example

For a = 2, b = 7 and c = 2, the output should be
extraNumber(a, b, c) = 7.

The two equal numbers are a and c. The third number (b) equals 7, which is the answer.

int extraNumber(int a, int b, int c) {
    return a ^ b ^ c;
}
*/
int extraNumber(int a, int b, int c) {
    if(a ==b)return c;
    if(b ==c)return a;
    if(a ==c)return b;
}

int main(){

    cout<<extraNumber(2, 7, 2);
}
