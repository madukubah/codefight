/*
Reverse the bits of a given 16 bits unsigned short integer.

Example

For n = 7236, the output should be
reverseBits(n) = 8760.

723610 = 00011100010001002, after reversing:
00100010001110002 = 876010.

Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] integer n

Guaranteed constraints:
1 ≤ n ≤ 215.

[output] integer
*/
int reverseBits(int n) {
  int res = 0;
  for (int i = 0; i < 16; i++) {
    res = res << 1 | (n%2) ;
    n /= 2;
  }
  return res;
}

