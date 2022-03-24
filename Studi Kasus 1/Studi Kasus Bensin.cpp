#include <iostream>
using namespace std;

class Jenis{
	public :
		Jenis();
		void pil();
		void hitung();
		string nama;
	 private :
	 	
	 	char pilih;
	 	float pertalite, pertamax;
	 	float harga;
	 	float liter;
	 	float total;
};

Jenis::Jenis(){
	harga = 0;
	pertalite = 7000;
	pertamax = 9000;
	
}



void Jenis::pil(){
	cout << "Selamat datang !! \n";
	cout << "Masukan nama anda : ";
	cin>>nama;
	cout<<"Pilih Jenis Bensin yang anda inginkan : "<<endl;
	cout<<"a. Pertalite "<<endl;
	cout<<"b. Pertamax"<<endl;
	cout<<"Pilihan anda = ";
	cin>>pilih;
	
	

	

