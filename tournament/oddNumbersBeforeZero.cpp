
/*
Given an array of integers, count the odd numbers before the first (i.e. leftmost) occurrence of zero.

Example

For sequence = [1, 2, 3, 0, 4, 5, 6, 0, 1], the output should be
oddNumbersBeforeZero(sequence) = 2.

Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] array.integer sequence

An array of integers which contains at least one zero.

Guaranteed constraints:
4 ≤ sequence.length ≤ 10,
0 ≤ sequence[i] ≤ 50.

[output] integer
*/
int oddNumbersBeforeZero(std::vector<int> sequence) {
    int odd=0;
    for(int i=0; i< sequence.size(); i++){
        if( sequence[i] %2== 1 )odd++;
        if( sequence[i] == 0 ) return odd;
    }

    return 0;

}

