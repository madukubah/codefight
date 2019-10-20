/*
Given a string, find the shortest possible string which can be achieved by adding characters to the end of initial string to make it a palindrome.

Example

For st = "abcdc", the output should be
buildPalindrome(st) = "abcdcba".

Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] string st

A string consisting of lowercase English letters.

Guaranteed constraints:
3 ≤ st.length ≤ 10.

[output] string
*/
bool pivot= false;
bool isPalindrome(std::string st, int start){
    cout<<"start = "<<start<<endl;
    pivot= false;
    for(int i= start, j =start-1; i< st.length(); i++, j--){
        if(st[j] != st[i] && !pivot){
            if(st[--j] != st[i]){
                return false;
            }else{
                pivot =true;
                cout<<st[j+1]<<endl;
            }
        }else if( st[j] != st[i] && pivot ) return false;



    }
    return true;
}
std::string buildPalindrome(std::string st) {
    int sample = st.length()/2;
    int i= sample;
    for( ; i< st.length(); i++){
        if(isPalindrome( st, i))break;
    }
    // i -= pivot;
    // i--;
    int l = (st.length()) -i;
    for(int j = (i - l)-1 - pivot ; j>=0; j-- ){
        st.push_back(st[j]);
    }

    return st;
}

std::string buildPalindrome(std::string st) {
    for(int i = 0; i < st.size(); ++i){
        string sub = st.substr(0,i); reverse(sub.begin(), sub.end());
        string str = st + sub;
        string rev = str; reverse(rev.begin(),rev.end());
        if(str == rev) return str;
    }
}

std::string buildPalindrome(std::string st) {

    string ret(st);
    auto it = st.begin();
    while (ret != string(ret.rbegin(), ret.rend())) {
        ret.insert(st.size(), 1, *it++);
    }
    return ret;
}

