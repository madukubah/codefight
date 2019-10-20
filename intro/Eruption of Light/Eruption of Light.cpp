/*
A string is said to be beautiful if b occurs in it no more times than a; c occurs in it no more times than b; etc.

Given a string, check whether it is beautiful.

Example

For inputString = "bbbaacdafe", the output should be
isBeautifulString(inputString) = true;
For inputString = "aabbb", the output should be
isBeautifulString(inputString) = false;
For inputString = "bbc", the output should be
isBeautifulString(inputString) = false.
Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] string inputString

A string of lowercase letters.

Guaranteed constraints:
3 ≤ inputString.length ≤ 50.

[output] boolean
*/
bool isBeautifulString(std::string inputString) {
    std::vector x (26, 0);
    for(int i=0; i< inputString.size(); i++){
        x[ (int)(inputString[i]-'a') %26 ]+=1;
    }
    for(int i=1; i< 26; i++){
        if( x[i] > x[i-1] ) return false;
    }

    return true;
}
