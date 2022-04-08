#include<iostream>
#include"proses.h"

using namespace std;

void makan :: slip(){
    ofstream slip("slip.txt");
    cout << endl;

    if (!slip.is_open()){
        cout << "Gagal membuka file !";
    } else {
        slip << "========================================\n";
        slip << "            SLIP PEMBAYARAN           \n";
        slip << "============makan POJOK===============\n";
		slip << "================MENU====================\n";
		slip << "1. Ayam Geprek  ( Rp. 21000 ) \n";
		slip << "2. Ayam Goreng  ( Rp. 17000 ) \n";
		slip << "3. Udang Goreng ( Rp. 19000 ) \n";
	    slip << "4. Cumi Goreng  ( Rp. 20000 ) \n";
		slip << "5. Ayam Bakar   ( Rp. 25000 ) \n";
        slip << "========================================\n";
        slip << "Total Belanjaan Anda    : " << harga << endl;
        slip << "Uang Yang Kamu Bayarkan : " << bayar << endl;
        slip << "Jumlah kembalian        : " << bayar-harga << endl;
        slip << "========================================\n";
        slip << "              TERIMAKASIH           \n";
        slip << "           selamat menikmati        \n";
        slip << "========================================\n";    
    }
}