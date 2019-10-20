/*
Imagine a white rectangular grid of n rows and m columns divided into two parts by a diagonal line running from the upper left to the lower right corner. Now let's paint the grid in two colors according to the following rules:

A cell is painted black if it has at least one point in common with the diagonal;
Otherwise, a cell is painted white.
Count the number of cells painted black.

Example

For n = 3 and m = 4, the output should be
countBlackCells(n, m) = 6.

There are 6 cells that have at least one common point with the diagonal and therefore are painted black.



For n = 3 and m = 3, the output should be
countBlackCells(n, m) = 7.

7 cells have at least one common point with the diagonal and are painted black.



Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] integer n

The number of rows.

Guaranteed constraints:
1 ≤ n ≤ 105.

[input] integer m

The number of columns.

Guaranteed constraints:
1 ≤ m ≤ 105.

[output] integer

The number of black cells.*/
#include<iostream>

using namespace std;
int gcd(int n, int m){
    while (m) {
        int temp = n;
        n = m;
        m = temp%m;
    }

    return n;
}
int countBlackCells(int n, int m) {
    if (n == m) return (n + 2*(n-1));
    if (n == 1 or m==1 ) return n*m;
    return n + m -gcd(n, m) + (gcd(n, m)-1)*2;
}

/*
int countBlackCells(int n, int m) {
    int r = 0;
    if (n > m)
        std::swap(n, m);
    for (long i = 0; i < n; i++) {
        r += i * m % n == 0;
    }
    return m + n + r - 2;
}

*/
/*
int countBlackCells(int n, int m) {
    int answer = 0;
    for (int x = 1; x <= n; x++) {
        int L = (int) (m * 1L * (x - 1) / n);
        if (m * 1L * (x - 1) % n == 0) {
            L--;
        }
        int R = (int) (m * 1L * x / n);
        L = Math.Max(0, L);
        R = Math.Min(R, m - 1);
        answer += R - L + 1;
    }
    return answer;
}
*/
int main(){
    cout<<countBlackCells(6, 3);
}
