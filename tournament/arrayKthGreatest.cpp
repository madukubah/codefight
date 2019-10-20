/*
Given array of integers, find its kth greatest element.

Example

For inputArray = [19, 32, 11, 23] and k = 3, the output should be
arrayKthGreatest(inputArray, k) = 19.
*/
#include<iostream>

using namespace std;

int arrayKthGreatest(std::vector<int> inputArray, int k) {

  for (int i = 0; i < k; i++) {
    int indexOfMaximum = i,
        tmp = inputArray[i];

    for (int j = i + 1; j < inputArray.size(); j++) {
      if (inputArray[j] > inputArray[indexOfMaximum]) {
        indexOfMaximum = j;
      }
    }

    inputArray[i] = inputArray[indexOfMaximum];
    inputArray[indexOfMaximum] = tmp;
  }

  return inputArray[k - 1];
}
