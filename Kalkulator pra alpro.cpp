#include<iostream>
using namespace std;

	int penjumlahan(int bil1, int bil2){
	return bil1+bil2; 
	}
	
	int pengurangan(int bil1, int bil2){
		return bil1-bil2;
	}
	
	int pembagian(int bil1, int bil2){
		return bil1/bil2;
	}
	
	int perkalian(int bil1, int bil2){
		return bil1*bil2;
	}
	int main(){
	int bil1,bil2,menu;
	cout<<"==================="<<endl;
	cout<<"PROGRAM KALKULATOR "<<endl;
	cout<<"==================="<<endl;
	cout<<"Menu Operasi : "<<endl;
	cout<<"1. Penjumlahan "<<endl;
	cout<<"2. Pengurangan "<<endl;
	cout<<"3. Perkalian   "<<endl;
	cout<<"4. Pembagian   "<<endl;
	cout<<"==================="<<endl;
	cout<<"Pilih Menu No : ";
	cin>>menu;
	cout<<"Bilangan Pertama : ";
	cin>>bil1;
	cout<<"Bilangan Kedua : ";
	cin>>bil2;
	
	if(menu == 1){
		cout<<"Hasil " <<bil1 <<" + " <<bil2 <<" = "<<penjumlahan(bil1,bil2);
	}
	else if(menu == 2){
		cout<<"Hasil " <<bil1 <<" - " <<bil2 <<" = "<<pengurangan(bil1,bil2);
	}
	else if(menu == 3){
		cout<<"Hasil " <<bil1 <<" X " <<bil2 <<" = "<<perkalian(bil1,bil2);
	}
	else if(menu == 4){
		cout<<"Hasil " <<bil1 <<" : " <<bil2 <<" = "<<pembagian(bil1,bil2);
	}
}
