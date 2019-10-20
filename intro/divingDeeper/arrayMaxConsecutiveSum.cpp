/*
Given array of integers, find the maximal possible sum of some of its k consecutive elements.

Example

For inputArray = [2, 3, 5, 1, 6] and k = 2, the output should be
arrayMaxConsecutiveSum(inputArray, k) = 8.
All possible sums of 2 consecutive elements are:

2 + 3 = 5;
3 + 5 = 8;
5 + 1 = 6;
1 + 6 = 7.
Thus, the answer is 8.
Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] array.integer inputArray

Array of positive integers.

Guaranteed constraints:
3 ≤ inputArray.length ≤ 105,
1 ≤ inputArray[i] ≤ 1000.

[input] integer k

An integer (not greater than the length of inputArray).

Guaranteed constraints:
1 ≤ k ≤ inputArray.length.

[output] integer

The maximal possible sum.
*/
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int arrayMaxConsecutiveSum(std::vector<int> inputArray, int k) {
    vector<int> sum(inputArray.size()+1);
    for(int i=0;i<inputArray.size();i++)
        sum[i+1]=inputArray[i]+sum[i];
    int ans = 0;
    for(int i=k;i<=inputArray.size();i++)
        ans = max(ans,sum[i]-sum[i-k]);
    return ans;
}
