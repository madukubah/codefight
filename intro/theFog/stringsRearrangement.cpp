#include<iostream>
#include<vector>

bool differ_by_one(std::string str_1, std::string str_2){
    bool one_dif = false;
    for( int i =0; i< str_1.length(); ++i){
        if(str_1[i] != str_2[i]){
            if(one_dif){
                return false;
            } else {
                one_dif = true;
            }
        }
    }
    if(one_dif){
        return true;
    }
    return false;
}


bool is_good(std::vector<std::string> &inputArray, std::vector<bool> indexs_checked, int index){

    int i = 0;
    while ( i < indexs_checked.size()){
        if(false == indexs_checked[i]){
            break;
        }
        ++i;
    }
    if(i == indexs_checked.size()){
        return true;
    }

    for(i = 0; i < inputArray.size(); ++i){
        cout << "index: " << index << " i: " << i << endl;
      if(i!=index and indexs_checked[i]==false){
          if(differ_by_one(inputArray[i], inputArray[index])){
              indexs_checked[i] = true;
              cout << "found a good pair" << endl;
              if(is_good(inputArray,indexs_checked,i)){
                  cout << "found a valid path" << endl;
                  return true;
              } else {
                  indexs_checked[i] = false;
              }
          }
      }
    }
    cout << "nothing more to check" << endl;
    return false;

}


bool stringsRearrangement(std::vector<std::string> inputArray) {
    for(int i =0; i< inputArray.size(); ++i){
        std::vector<bool> indexs_checked(inputArray.size(), false);
        indexs_checked[i] = true;
        if( is_good(inputArray, indexs_checked, i) ){
            return true;
        }
    }
    return false;
}

int main(){
}
