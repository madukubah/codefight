/*
A number of people are applying for a place in some team. Each of them has his own proficiency level (p.l.), which is represented as a positive integer, and the higher the level is - the better.

There are only n places in the team, and the recruiter hires only those who have their p.l. not less than m.

All applicants are standing in a queue and if the current one satisfies the required conditions, he is taken into the team right away. Once the team is full, all the remaining people are denied regardless of their p.l.

What is the total p.l. of the applicants that get be hired? It is guaranteed that all n places can be taken.

Example

For a = [4, 2, 3, 6, 2, 5, 4], n = 3 and m = 4, the output should be
summaryProficiency(a, n, m) = 15.

Explanation: 4 + 6 + 5 = 15.

Input/Output

[execution time limit] 4 seconds (js)

[input] array.integer a

An array of positive integers, representing a queue of proficiency levels.

Guaranteed constraints:
5 ≤ a.length ≤ 15,
0 ≤ a[i] ≤ 100.

[input] integer n

Guaranteed constraints:
1 ≤ n ≤ 10.

[input] integer m

Guaranteed constraints:
1 ≤ m ≤ 10.
*/
#include<iostream>
using namespace std;
int summaryProficiency(std::vector<int> a, int n, int m) {

  int result = 0;
  for (int i = 0; n > 0; i++) {
    if (a[i] >= m) {
      result += a[i];
      n--;
    }
  }

  return result;
}

int main(){

}
