/*
Let's say that number a feels comfortable with number b if a ≠ b and b lies in the segment [a - s(a), a + s(a)], where s(x) is the sum of x's digits.

How many pairs (a, b) are there, such that a < b, both a and b lie on the segment [l, r], and each number feels comfortable with the other (so a feels comfortable with b and b feels comfortable with a)?

Example

For l = 10 and r = 12, the output should be
comfortableNumbers(l, r) = 2.

Here are all values of s(x) to consider:

s(10) = 1, so 10 is comfortable with 9 and 11;
s(11) = 2, so 11 is comfortable with 9, 10, 12 and 13;
s(12) = 3, so 12 is comfortable with 9, 10, 11, 13, 14 and 15.
Thus, there are 2 pairs of numbers comfortable with each other within the segment [10; 12]: (10, 11) and (11, 12).
*/
#include<iostream>
#include<vector>

using namespace std;
int sum( int n )
{
    int z = 0;
    int x;
    int digit = log10(n)+1;
    while( n )
    {
        z += n % 10;
        n = n/10;
    }
    return z;
}

int comfortableNumbers(int l, int r) {
    int result =0;
    std::vector<int> z(5000) ;
    std::vector< std::vector<int> > check ( 5000 , z ) ;
    int len = 0;
    for( int i = l ; i<= r; i++ )
    {
        len = sum( i );
        for( int j = i-len ; j < i; j++ )
        {
            if( j < 0 )continue;
            else{
                if( check[ j ][ i ] == 1 ) result++;
            }
        }

        for( int k = i+1 ; k <= i+len; k++ )
        {
            check[ i ][ k ] = 1 ;
        }

    }
    return result;
}

