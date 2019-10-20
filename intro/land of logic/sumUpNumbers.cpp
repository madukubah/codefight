/*CodeMaster has just returned from shopping. He scanned the check of the items he bought and gave the resulting string to Ratiorg to figure out the total number of purchased items. Since Ratiorg is a bot he is definitely going to automate it, so he needs a program that sums up all the numbers which appear in the given input.

Help Ratiorg by writing a function that returns the sum of numbers that appear in the given inputString.

Example

For inputString = "2 apples, 12 oranges", the output should be
sumUpNumbers(inputString) = 14.

Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] string inputString

Guaranteed constraints:
6 ≤ inputString.length ≤ 60.

[output] integer*/

int sumUpNumbers(std::string inputString) {
    int start =0;
    vector<string> r;
    bool s = false;
    for(int i=0; i < inputString.size(); i++){
        if( ('0' <= inputString[i] && inputString[i] <='9') ){
             s =true;
        }else{
            if( s ){
                r.push_back( ( inputString.substr( start, i-start) ) ) ;
                start =i+1;
                s =false;
            }else{
                start =i+1;
            }

        }
    }
    if( s ){
        r.push_back( ( inputString.substr( start) ) ) ;
        s =false;
    }
    int x=0;
    for(int i=0; i< r.size(); i++){
        cout<<r[i]<<"|";
        x+= stoi(  r[i] );
    }
    return x;
}

best
int sumUpNumbers(std::string s) {
    int cur = 0;
    int sum = 0;
    s.push_back('@');
    for(char c:s)
        if(c>='0'&&c<='9')
            cur = cur*10 + c-'0';
        else
            sum += cur, cur = 0;
    return sum;
}
