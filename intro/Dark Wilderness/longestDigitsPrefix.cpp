/*Given a string, output its longest prefix which contains only digits.

Example

For inputString="123aa1", the output should be
longestDigitsPrefix(inputString) = "123".

Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] string inputString

Guaranteed constraints:
3 ≤ inputString.length ≤ 35.

[output] string*/
std::string longestDigitsPrefix(std::string inputString) {
    std::string result;
    for(int i=0; i< inputString.length(); i++){
        if( '0' <= inputString[i] && inputString[i] <= '9' ){
            result.push_back(inputString[i]);
        }else{
            return result;
        }
    }
    return result;
}
std::string longestDigitsPrefix(std::string inputString) {
    return inputString.substr(0, inputString.find_first_not_of("0123456789"));
}
