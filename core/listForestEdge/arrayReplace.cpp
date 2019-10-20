/*
Given an array of integers, replace all the occurrences of elemToReplace with substitutionElem.

Example

For inputArray = [1, 2, 1], elemToReplace = 1 and substitutionElem = 3, the output should be
arrayReplace(inputArray, elemToReplace, substitutionElem) = [3, 2, 3].

Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] array.integer inputArray

Guaranteed constraints:
2 ≤ inputArray.length ≤ 10,
0 ≤ inputArray[i] ≤ 10.

[input] integer elemToReplace

Guaranteed constraints:
0 ≤ elemToReplace ≤ 10.

[input] integer substitutionElem

Guaranteed constraints:
0 ≤ substitutionElem ≤ 10.

[output] array.integer
*/
#include<iostream>
#include<vector>

using namespace std;
std::vector<int> arrayReplace(std::vector<int> inputArray, int elemToReplace, int substitutionElem) {
    for(int i=0; i< inputArray.size() ; i++){
        if(inputArray[i] == elemToReplace) inputArray[i] = substitutionElem;
    }
    return inputArray;
}
/*
std::vector<int> arrayReplace(std::vector<int> arr, int elemToReplace, int substitutionElem) {

    std::replace(arr.begin(), arr.end(), elemToReplace, substitutionElem);

    return arr;
}

*/
int main(){
}
