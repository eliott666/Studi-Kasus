#include<iostream>
#include<fstream>

using namespace std;
class makan{
public:
    void milih();
    void menu();
    void alamat();
    void slip();

private:
	int harga,pilih,pilih_menu,jarak,total,bayar;
	float diskon;

};

void makan::menu(){
    cout << "=============MAKAN BANG==============\n";
    cout << "================MENU=================\n";
    cout << "1. Ayam Geprek  ( Rp. 21000 ) \n";
    cout << "2. Ayam Goreng  ( Rp. 17000 ) \n";
    cout << "3. Udang Goreng ( Rp. 19000 ) \n";
    cout << "4. Cumi Goreng  ( Rp. 20000 ) \n";
    cout << "5. Ayam Bakar   ( Rp. 25000 ) \n";
}

void makan::milih(){
    cout << "Masukan Banyak Pesananmu : ";
    cin >> pilih_menu;
    for (int i= 1; i<= pilih_menu; i++){
        
        cout << "Masukan Menu Apa saja yang kamu inginkan : ";
        cin >> pilih;

      if (pilih == 1){
        cout << "Kamu Memilih Ayam Geprek\n";
        harga = harga + 21000;
        
    } else if (pilih == 2){
        cout << "Kamu Memilih Ayam Goreng\n";
        harga = harga + 17000;
        
    } else if(pilih == 3){
        cout << "Kamu Memilih Udang Goreng\n";
        harga = harga + 19000;
        
    } else if (pilih == 4){
        cout << "Kamu Memilih Cumi Bakar\n";
        harga = harga + 20000;
        
    } else if(pilih == 5){
        cout << "Kamu Memilih Ayam Bakar\n";
        harga = harga + 25000;
        
    } else{
        cout << "Waduh Pilihanmu Tidak Tersedia Nih";
    }
    }
    
}
