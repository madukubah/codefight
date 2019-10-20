/*
Ratiorg got statues of different sizes as a present from CodeMaster for his birthday, each statue having an non-negative integer size. Since he likes to make things perfect, he wants to arrange them from smallest to largest so that each statue will be bigger than the previous one exactly by 1. He may need some additional statues to be able to accomplish that. Help him figure out the minimum number of additional statues needed.

Example

For statues = [6, 2, 3, 8], the output should be
makeArrayConsecutive2(statues) = 3.

Ratiorg needs statues of sizes 4, 5 and 7.

Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] array.integer statues

An array of distinct non-negative integers.

Guaranteed constraints:
1 ≤ statues.length ≤ 10,
0 ≤ statues[i] ≤ 20.

[output] integer

The minimal number of statues that need to be added to existing statues such that it contains every integer size from an interval [L, R] (for some L, R) and no other sizes.
*/
#include<iostream>
#include<vector>

int makeArrayConsecutive2(std::vector<int> inputArray) {
    int biggest=-1001;
    for(int i=0; i< inputArray.size() ; i++){
        if(inputArray[i] > biggest){
            biggest=inputArray[i] ;
        }
    }

    int smallest = biggest;
    for(int i=0; i< inputArray.size() ; i++){
        if(inputArray[i] < smallest){
            smallest=inputArray[i];
        }
    }
    return (biggest - smallest) - (inputArray.size()-1);
}

int main(){
    int intArray[]={6, 2, 3, 8};
    std::vector<int> intVector(intArray, intArray + sizeof(intArray) / sizeof(int));

    std::cout<<makeArrayConsecutive2(intVector);
}
