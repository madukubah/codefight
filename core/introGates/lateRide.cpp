#include<iostream>
#include<vector>
using namespace std;

/*
For n = 240, the output should be
lateRide(n) = 4.

Since 240 minutes have passed, the current time is 04:00. The digits sum up to 0 + 4 + 0 + 0 = 4, which is the answer.

For n = 808, the output should be
lateRide(n) = 14.

808 minutes mean that it's 13:28 now, so the answer should be 1 + 3 + 2 + 8 = 14.
*/
/*
the best
int lateRide(int n) {
    int h = n / 60;
    int m = n % 60;
    return h % 10 + h / 10 + m % 10 + m / 10;
}
*/
int lateRide(int n) {
    int sisa =  n%60;
    cout<<sisa <<endl;
    return (( (n/60)/10 ) + ( (n/60)%10) ) + (sisa/10) + (sisa%10);
}
int main(){
    cout<<lateRide(808);
}
