#include<iostream>
#include<vector>
#include<queue>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;
int main(){
    string seri = "seri";

    string A[3][3]={
        { seri  , "P1", "P2" },
        {"P2", "seri", "P1" },
        {"P1", "P2", "seri" }
    };

    string index[3] = {"batu", "gunting", "kertas"};

    int p1, p2;
    cout<<"masukkan P1 (batu = 0, gunting = 1, kertas = 2) = ";cin>>p1;
    system("CLS");
    cout<<"masukkan P2 (batu = 0, gunting = 1, kertas = 2) = ";cin>>p2;
    cout<<endl;
    system("CLS");
    cout<<"P1 = "<< index[p1] <<", P2 = "<< index[p2] <<endl;

    //mesin
    cout<<"pemenangnya adalah = "<<A[p1][p2];


}
