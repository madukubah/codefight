/*
Define a word as a sequence of consecutive English letters. Find the longest word from the given string.

Example

For text = "Ready, steady, go!", the output should be
longestWord(text) = "steady".

Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] string text

Guaranteed constraints:
4 ≤ text.length ≤ 50.

[output] string

The longest word from text. It's guaranteed that there is a unique output.
*/
std::string longestWord(std::string text) {
    vector<string> r;
    int start =0;
    cout<<text.size();

    for(int i=0; i< text.size(); i++){
        if( ( 'a' <= text[i] && text[i] <= 'z' ) ||
            ( 'A' <= text[i] && text[i] <= 'Z' )
          ){

        }else{
            r.push_back( text.substr( start, i-start ) );
            start = i+1;
        }
    }
    r.push_back( text.substr(start) );
    int x=0;
    string y= r[0];
    for(int i=0; i< r.size(); i++){
        cout<<r[i]<<"|";
        if( r[i].size() > y.size() ){
            y = r[i];
            x=i;
        }
    }
    return r[x];

}
