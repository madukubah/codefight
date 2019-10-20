#include<iostream>

using namespace std;

int absoluteValuesSumMinimization(std::vector<int> a) {
    int low_result = 0;
    int index = 0;
    for(int i = 0; i < a.size(); ++i){
        low_result += abs(a[i]-a[index]);
    }
    for(int i = 1; i < a.size(); ++i){
        int aux_low_result = 0;
        for(int j =0; j < a.size(); ++j){
            aux_low_result += abs(a[j]-a[i]);
        }
        if(low_result > aux_low_result){
            low_result = aux_low_result;
            index = i;
        }
    }
    return a[index];
}

/*
MEDIAN!!!!
int absoluteValuesSumMinimization(std::vector<int> a) {
    return a[(a.size() - 1) / 2];
}

*/
int main(){

}
