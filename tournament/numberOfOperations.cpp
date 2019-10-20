/*
This operation is applied sequentially until it stops working. Return the number of times the operation is applied. It is guaranteed that the answer is a finite number.

Example

For a = 432 and b = 72, the output should be
numberOfOperations(a, b) = 4.

For (a, b) = (432, 72) there will be 4 such operations:
(432, 72) -> (6, 72) -> (6, 12) -> (6, 2) -> (3, 2).

Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] integer a

Guaranteed constraints:
2 ≤ a ≤ 108.

[input] integer b

Guaranteed constraints:
2 ≤ b ≤ 108.

[output] integer
*/
int numberOfOperations(int a, int b) {
    int result=0;
    if(a > b) std::swap(a, b);
    while( b%a ==0){
        b = b/a;
        if(a > b) std::swap(a, b);
        result++;
    }

    return result;
}
