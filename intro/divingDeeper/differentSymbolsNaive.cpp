/*Given a string, find the number of different characters in it.*/
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int differentSymbolsNaive(std::string s) {
    vector<bool> isVisited(26, false);
    int res=0;
    for(int i=0; i< s.length(); i++){
        if(  isVisited[ ((int) (s[i] - 'a')) % 26 ]  ){

        }else{
            res++;
            isVisited[ ((int) (s[i] - 'a')) % 26]= true;
        }

        int a = ((int) (s[i] - 'a')) % 26;
        cout<<(int)s[i]-'a' <<" "<< a <<endl;
        for(int i=0; i< isVisited.size(); i++)
            cout<< isVisited[i]<<" ";
        cout<<endl;
    }
    return res;
}
/*
int differentSymbolsNaive(std::string s) {
    return std::set<char>(s.begin(), s.end()).size();
}

*/
int main(){
    cout<<differentSymbolsNaive("codefights");
}
