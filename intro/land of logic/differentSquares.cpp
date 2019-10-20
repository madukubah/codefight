/*
Given a rectangular matrix containing only digits, calculate the number of different 2 × 2 squares in it.

Example

For

matrix = [[1, 2, 1],
          [2, 2, 2],
          [2, 2, 2],
          [1, 2, 3],
          [2, 2, 1]]
the output should be
differentSquares(matrix) = 6.

Here are all 6 different 2 × 2 squares:

1 2
2 2
2 1
2 2
2 2
2 2
2 2
1 2
2 2
2 3
2 3
2 1
Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] array.array.integer matrix

Guaranteed constraints:
1 ≤ matrix.length ≤ 100,
1 ≤ matrix[i].length ≤ 100,
0 ≤ matrix[i][j] ≤ 9.

[output] integer

The number of different 2 × 2 squares in matrix.
*/

#include<iostream>
#include<vector>

using namespace std;

int getNumber(vector<int> r){
    int n=0;
    for(int i=0; i< r.size(); i++){
        n+= r[i];
        n*=10;
    }
    n/=10;
    cout<<n<<endl;
    return n;
}

int differentSquares(std::vector<std::vector<int>> matrix) {
    vector<bool> visit (9999, false);
    int n=0;
    if( matrix.size() <= 1 || matrix[0].size() <=1 ) return 0;

    for(int i=1; i< matrix.size(); i++){
        for(int j=1; j< matrix[i].size(); j++){
            vector<int> a;
            a.push_back( matrix[i-1][j-1] );
            a.push_back( matrix[i-1][j] );
            a.push_back( matrix[i][j-1] );
            a.push_back( matrix[i][j] );
            int x = getNumber(a);
            if( ! visit[x] ){
                n++;
                visit[x] = true;
            }
        }
    }
    return n;

}

BEST
int differentSquares(std::vector<std::vector<int>> m) {
    set<int> se;
    for(int i = 1; i < m.size(); ++i)
        for(int j = 1; j < m[0].size(); ++j)
            se.insert(m[i][j]+10*m[i-1][j]+100*m[i][j-1]+1000*m[i-1][j-1]);
    return se.size();
}

