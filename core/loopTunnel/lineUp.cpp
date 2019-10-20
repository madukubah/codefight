/*
Given the list of commands the coach has given, count the number of such commands after which the students will be facing the same direction.

Example

For commands = "LLARL", the output should be
lineUp(commands) = 3.

Let's say that there are 4 students, and the second one can't tell left from right. In this case, only after the second, third and fifth commands will the students face the same direction.



Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] string commands

String consisting of characters 'L', 'R' and 'A' only.

Guaranteed constraints:
0 ≤ commands.length ≤ 35.

[output] integer

The number of commands after which students face the same direction.
*/

#include<iostream>
#include<cstring>

using namespace std;
int lineUp(std::string commands) {
    int RL =0, same=0;
    for(int i=0; i<commands.length() ; i++ ){
        if(commands[i] == 'R' | commands[i] == 'L'){
            RL++;
        }
        if(RL % 2 == 0){
            same ++;
        }
    }
    return same;
}
/*
BEST!!
int lineUp(std::string commands) {
    int r = 0, p = 0;
    for (c : commands) {
        p ^= c != 'A';
        r += !p;
    }
    return r;
}

*/

int main(){
    cout<<lineUp("LLARL");
}
