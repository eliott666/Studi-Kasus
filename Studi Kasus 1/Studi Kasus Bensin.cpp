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
	cout<<"A. Pertalite "<<endl;
	cout<<"B. Pertamax"<<endl;
	cout<<"Pilihan anda = ";
	cin>>pilih;
	
	if(pilih == 'A'){
		cout<<"Berapa Liter Bensin yang anda inginkan ?"<<endl;
		in>>liter;
		total = liter * pertalite;
		cout<<"Total Harga yang harus dibayar = Rp "<<total<<endl; }
	else if (pilih == 'B') {
		cout<<"Berapa Liter Bensin yang anda inginkan ?"<<endl;
		cin>>liter;
		total = liter * pertamax;
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	int main(){

	Jenis spbu;
	spbu.pil();
	return 0;
}
	

	

