/*
Find the number of ways to express n as sum of some (at least two) consecutive positive integers.

Example

For n = 9, the output should be
isSumOfConsecutive2(n) = 2.

There are two ways to represent n = 9: 2 + 3 + 4 = 9 and 4 + 5 = 9.

For n = 8, the output should be
isSumOfConsecutive2(n) = 0.

There are no ways to represent n = 8.

Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] integer n

A positive integer.

Guaranteed constraints:
1 ≤ n ≤ 25.

[output] integer
*/

int isSumOfConsecutive2(int n) {
    int sub=0;
    int way=0;
    int m=n;
    for(int start =1; start<n; start++){
        sub = start;
        m=n;
        while(m > 0){
            m -= sub;
            sub++;
        }
        if(m==0){
            way++;
        }
    }
    return way;
}
/*
int isSumOfConsecutive2(int n) {
    int r = 0;
    for (int i = 2; i < n; i++) {
        r += n % i == (i & 1 ? 0 : i / 2) && (n - 1) / i + 1 > i / 2;
    }
    return r;
}
*/
