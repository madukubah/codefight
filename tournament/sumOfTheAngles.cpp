/*
Find the sum of the angles of a convex n-gon for a given n.

Example

For n = 3, the output should be
sumOfTheAngles(n) = 180.

Triangle

Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] integer n

Guaranteed constraints:
3 ≤ n ≤ 15.

[output] integer
*/

int sumOfTheAngles(int n) {
    int x = 360 /n;
    x = 180- x;

    return x*n;
}

