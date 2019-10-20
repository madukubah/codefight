#include<iostream>
#include<vector>
#include<queue>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;
int main(){

    string index[3] = {"batu", "gunting", "kertas"};

    int p1, p2;
    cout<<"masukkan P1 (batu = 0, gunting = 1, kertas = 2) = ";cin>>p1;
    system("CLS");
    cout<<"masukkan P2 (batu = 0, gunting = 1, kertas = 2) = ";cin>>p2;
    cout<<endl;
    system("CLS");
    cout<<"P1 = "<< index[p1] <<", P2 = "<< index[p2] <<endl;

    if( p1 == 0 ){
        if( p2 == 0 ){
            cout<<"seri";
        }
        if( p2 == 1 ){
            cout<<"P1 menang";
        }
        if( p2 == 2 ){
            cout<<"P2 menang";
        }
    }
    if( p1 == 1 ){
        if( p2 == 1 ){
            cout<<"seri";
        }
        if( p2 == 0 ){
            cout<<"P2 menang";
        }
        if( p2 == 2 ){
            cout<<"P1 menang";
        }
    }
    if( p1 == 2 ){
        if( p2 == 2 ){
            cout<<"seri";
        }
        if( p2 == 0 ){
            cout<<"P1 menang";
        }
        if( p2 == 1 ){
            cout<<"P2 menang";
        }
    }
}

