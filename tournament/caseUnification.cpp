/*
Given an initial string, switch case of the minimal possible number of letters to make the whole string written in the upper case or in the lower case.

Example

For inputString = "Aba", the output should be
caseUnification(inputString) = "aba";
For inputString = "ABa", the output should be
caseUnification(inputString) = "ABA".
Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] string inputString

String of odd length consisting of letters.

Guaranteed constraints:
3 ≤ inputString.length ≤ 9.

[output] string

The resulting string.
*/
std::string caseUnification(std::string inputString) {
  std::regex matcherForUppercase("[a-z]");
  std::regex matcherForLowercase("[A-Z]");
  std::smatch matchForUppercase;
  std::smatch matchForLowercase;
  int changesToMakeUppercase = 0;
  std::string tmp = inputString;
  while (std::regex_search(tmp, matchForUppercase, matcherForUppercase)) {
    changesToMakeUppercase++;
    tmp = matchForUppercase.suffix().str();
  }
  int changesToMakeLowercase = 0;
  tmp = inputString;
  while (std::regex_search(tmp, matchForLowercase, matcherForLowercase)) {
    changesToMakeLowercase++;
    tmp = matchForLowercase.suffix().str();
  }
  if (changesToMakeUppercase == 0
    || changesToMakeLowercase != 0
    && changesToMakeUppercase < changesToMakeLowercase) {
    std::transform(inputString.begin(), inputString.end(),
      inputString.begin(),  ::toupper);
    return inputString;
  } else {
    std::transform(inputString.begin(), inputString.end(),
      inputString.begin(), ::tolower);
    return inputString;
  }
}
