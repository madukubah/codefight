#include <iostream>
#include <vector>

using namespace std;
/*
Return the obtained integer M.

Note: the phrase "first bits of M" refers to the least significant bits of M - the right-most bits of an integer. For further clarification see the following example.

Example

For a = [24, 85, 0], the output should be
arrayPacking(a) = 21784.

An array [24, 85, 0] looks like [00011000, 01010101, 00000000] in binary.
After packing these into one number we get 00000000 01010101 00011000 (spaces are placed for convenience), which equals to 21784.

Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] array.integer a

Guaranteed constraints:
1 ≤ a.length ≤ 4,
0 ≤ a[i] < 256.

[output] integer
*/

/*
BEST
int arrayPacking(std::vector<int> a) {
    int r = 0, s = -8;
    for (auto n : a)
        r |= n <<= s += 8;
    return r;
}
*/
void printbit(int number){
    for(int i=31; i>=0; i--){
        cout<<((number >> i) &1);
    }
    cout<<endl;
}
int arrayPacking(std::vector<int> a) {
    int number =0;
    for(int i=a.size(); i>=0; i--){
        cout<<a[i]<<"  ";
        printbit(a[i]);
        number = (number << 8) | a[i];
    }
    cout<<endl;
    cout<<endl;
    printbit(number);
    return number;

}
int main()
{
    int iArray[] = {24, 85, 0};

    std::vector<int> qiVector (iArray, iArray + sizeof(iArray)/sizeof(int) );
    printbit(1073741824);
    //cout<<arrayPacking(qiVector );
}
