/*
Determine if the given number is a power of some non-negative integer.

Example

For n = 125, the output should be
isPower(n) = true;
For n = 72, the output should be
isPower(n) = false.
Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] integer n

A positive integer.

Guaranteed constraints:
1 ≤ n ≤ 400.

[output] booleanx`

true if n can be represented in the form ab (a to the power of b) where a and b are some non-negative integers and b ≥ 2, false otherwise.
*/
bool isPower(int n) {
     if (n == 1) {
    return true;
  }
    int m;
    for(int i=2; i<n ; i++){
        m=n;
        while(m%i == 0){
            m/=i;
        }
        if(m==1){
            return true;
        }
    }
    return false;
}

