#include<iostream>
#include"input.h"

using namespace std;


    void makan::alamat(){
    cout << "Ayo Masukan Jarak Rumahmu *Dalam Km\n";
    cin >> jarak;
    cout << "Jarak Rumahmu Sejauh " << jarak << " Km\n";
if (jarak <= 3){
        if(harga <= 25000 ){
            cout << "Kamu Dibebani Ongkir 15000 nih\n";
            harga = harga + 15000; 
        }
        else if(harga > 25000 ){
            cout << "Selamat kamu mendapatkan Potongan Ongkir Sebesar Rp. 3000\n";
            total = harga + 12000;

        } else if(harga  > 50000){
            cout << "Selamat kamu mendapatkan Potongan Ongkir Sebesar Rp. 5000 dan Diskon sebesar 15%\n";
            diskon = harga * 0.15;
            total = harga - diskon + 10000;  

        } else if(harga > 150000){
            cout << "Selamat kamu mendapatkan Potongan Ongkir Sebesar Rp. 8000 dan Diskon Sebesar 35%\n";
            diskon = harga * 0.35;
            total = harga - diskon + 7000;
        }
    }
else if (jarak > 3){
        if(harga <= 25000){
            cout << "Kamu Dibebani Ongkir 25000 nih\n";
            harga = harga + 25000; 
        }
        else if((harga > 25000) && (harga <= 50000)){
            cout << "Selamat kamu mendapatkan Potongan Ongkir Sebesar Rp. 3000\n";
            total = harga + 22000;

        } else if((harga  > 50000) && (harga <= 150000)){
            cout << "Selamat kamu mendapatkan Potongan Ongkir Sebesar Rp. 5000 dan Diskon sebesar 15%\n";
            diskon = harga *0.15;
            total = harga - diskon + 20000;  

        } else if (harga > 150000){
            cout << "Selamat kamu mendapatkan Potongan Ongkir Sebesar Rp. 8000 dan Diskon Sebesar 35%\n";
            diskon = harga * 0.35;
            total = harga - diskon + 17000;
        }
    }

    cout << "Total Harga : " << harga << endl;
    cout << "Masukan Jumlah Uang Anda Rp. ";
    cin >> bayar;
    cout << "Kembalian " << bayar-harga;
} 

