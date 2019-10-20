#include<iostream>
using namespace std;

bool arithmeticExpression(int a, int b, int c) {
    return (a+b==c) || (a-b==c) || (a*b==c) || (double)(((double)a/(double)b)==c);
}
int main(){
    cout<<arithmeticExpression(8, 3, 2);
}
