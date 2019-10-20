/*
Remove a part of a given array between given 0-based indexes l and r (inclusive).

Example

For inputArray = [2, 3, 2, 3, 4, 5], l = 2 and r = 4, the output should be
removeArrayPart(inputArray, l, r) = [2, 3, 5].

Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] array.integer inputArray

Guaranteed constraints:
2 ≤ inputArray.length ≤ 10,
-10 ≤ inputArray[i] ≤ 10.

[input] integer l

Left index of the part to be removed (0-based).

Guaranteed constraints:
0 ≤ l ≤ r.

[input] integer r

Right index of the part to be removed (0-based).

Guaranteed constraints:
l ≤ r < inputArray.length.

[output] array.integer
*/
#include<iostream>

using namespace std;
std::vector<int> removeArrayPart(std::vector<int> inputArray, int l, int r) {
    inputArray.erase(inputArray.begin()+l,inputArray.begin()+r+1);
    return inputArray;
}


