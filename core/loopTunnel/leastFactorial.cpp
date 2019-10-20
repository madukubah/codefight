#include<iostream>
/*
Given an integer n, find the minimal k such that

k = m! (where m! = 1 * 2 * ... * m) for some integer m;
k >= n.
In other words, find the smallest factorial which is not less than n.

Example

For n = 17, the output should be
leastFactorial(n) = 24.

17 < 24 = 4! = 1 * 2 * 3 * 4, while 3! = 1 * 2 * 3 = 6 < 17).

Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] integer n

A positive integer.

Guaranteed constraints:
1 ≤ n ≤ 120.
*/
using namespace std;
int leastFactorial(int n) {
    int index =0;
    int Lfactorial =1;

    while(Lfactorial < n){
        cout<<Lfactorial<<endl;
        Lfactorial = Lfactorial * (index + 1);
        index++;
    }
    return Lfactorial;

}
/*
BEST!!!
int leastFactorial(int n) {
    int f = 1;
    for(int k = 0; ; ++k, f *= k)
        if (n <= f)
            return f;
}
*/

int main(){
    cout<<leastFactorial(17);
}
