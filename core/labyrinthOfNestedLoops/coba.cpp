#include<iostream>
using namespace std;

    int main(){

        double harga_kepay;
        double jumlah_pesan, total, total2;
        int pilih;

        cout<<"pesanan nasi kepay\n";
        cout<<"1.kepay kari - 6000\n";
        cout<<"2.kepay lada hitam - 7500\n";
        cout<<"3.kepay rendang - 6500\n";

        cout<<"Masukkan pilihan anda : ";
        cin>>pilih;
        cout<<"Pesan  berapa : ";
        cin>>jumlah_pesan;

        switch(pilih){
            case 1 :
              harga_kepay=6000;
              break;
            case 2 :
                harga_kepay=7500;
                break;
            case 3 :
                harga_kepay=6500;
                break;

        }
        total=harga_kepay*jumlah_pesan;
        if(jumlah_pesan>5){
            total=total-(total*0.2);
            cout<<"Anda mendapat diskon 20%.....\n";
        }
        cout<<"Harga total yang harus anda bayar adalah "<<total;








    }
