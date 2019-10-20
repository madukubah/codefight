/*
Given some integer, find the maximal number you can obtain by deleting exactly one digit of the given number.

Example

For n = 152, the output should be
deleteDigit(n) = 52;
For n = 1001, the output should be
deleteDigit(n) = 101.
Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] integer n

Guaranteed constraints:
10 ≤ n ≤ 106.

[output] integer
*/
int value( vector<int> a ,int i){
    a.erase(a.begin()+i);
    int r =0;
    for(int i=a.size()-1; i>=0; i-- ){
        r+= a[i];
        r*=10;
    }
    r/=10;
    return r;
}
int deleteDigit(int n) {
    vector<int> a;
    while(n){
        a.push_back( n%10 );
        n/=10;
    }
    int dp[a.size()+1];
    dp[0]=0;
    int best = dp[0];
    for(int i=1; i<= a.size(); i++ ){
        best = max( best, value(a, i-1) );
    }
    return best;
}
