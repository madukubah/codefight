/*
Given a string, return its encoding defined as follows:

First, the string is divided into the least possible number of disjoint substrings consisting of identical characters
for example, "aabbbc" is divided into ["aa", "bbb", "c"]
Next, each substring with length greater than one is replaced with a concatenation of its length and the repeating character
for example, substring "bbb" is replaced by "3b"
Finally, all the new strings are concatenated together in the same order and a new string is returned.
Example

For s = "aabbbc", the output should be
lineEncoding(s) = "2a3bc".

Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] string s

String consisting of lowercase English letters.

Guaranteed constraints:
4 ≤ s.length ≤ 15.

[output] string

Encoded version of s.
*/std::string lineEncoding(std::string s) {
    std::string result;
    int hit =1;
    for(int i=1; i< s.size(); i++){
        if( s[i-1] != s[i] ){
            if (hit >1){
                int n=0;
                cout<<hit<<endl;
                while( hit ){
                    result.insert( result.end()-n,  '0'+ (hit%10) );
                    cout<<result<<" ";
                    hit/=10;
                    n++;
                }
            }
            result.push_back(s[i-1]);
            hit = 1;
        }else{
            hit++;
        }
    }
    if (hit >1){
        int n=0;
        cout<<hit<<endl;
        while( hit ){
            result.insert( result.end()-n,  '0'+ (hit%10) );
            cout<<result<<" ";
            hit/=10;
            n++;
        }
    }
    result.push_back(s[s.size()-1]);
    return result;

}

best
std::string r, lineEncoding(std::string s) {
    for (auto i = begin(s), j = i; i != end(s); i = j) {
        while (*j == *i) ++j;
        r.append(j-i>1 ? to_string(j-i) : ""s).push_back(*i);
    }
    return r;
}

