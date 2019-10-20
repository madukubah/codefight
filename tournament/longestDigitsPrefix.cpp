/*
Given a string, output its longest prefix which contains only digits.

Example

For inputString="123aa1", the output should be
longestDigitsPrefix(inputString) = "123".

Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] string inputString

Guaranteed constraints:
3 ≤ inputString.length ≤ 35.

[output] string
*/
#include<string>
std::string longestDigitsPrefix(std::string inputString) {
    int digit = inputString.size();
    int i=0;
    for(;i<digit; i++){
        if(inputString[i] < '0' || inputString[i] > '9'  ) break;
    }

    return inputString.substr(0, i);
}

