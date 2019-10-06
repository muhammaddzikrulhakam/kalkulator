#include <iostream>
using namespace std;

int main() {

int menu, total;
int bil1, bil2;

ulang:
	system("cls");
cout<<"Kalkulator \n";
cout<<"BY M DZIKRUL HAKAM\n \n";

cout<<"Masukkan bilangan pertama	: "; cin>>bil1;
cout<<"Masukkan bilangan kedua		: "; cin>>bil2;

cout<<"\n";
cout<<"Konversi ke : \n";
cout<<"1. (*) Perkalian		\n";
cout<<"2. (*) penjumlahan	\n";
cout<<"3. (*) Pengurangan	\n";
cout<<"4. (*) Pembagian		\n";
cout<<"\nMasukkan : ";
cin>>menu;

	if (menu == 1) {
		total = bil1 * bil2;
		cout<<"jumlahnya adalah :" << total <<"\n";
		system("pause");
		goto ulang;	
	} 
	else if (menu == 2) {
		total = bil1 + bil2;
		cout<<"jumlahnya adalah :" << total <<"\n";
		system("pause");
		goto ulang;	
	}
	else if (menu == 3) {
		total = bil1 - bil2;
		cout<<"Jumlahnya adalah : " << total <<"\n";
		system("pause");
		goto ulang;	
	}
	else if (menu == 4) {
		total = bil1 / bil2;
		cout<<"Jumlahnya adalah : " << total <<"\n";
		system("pause");
		goto ulang;	
	}
	else {
		cout<<"Masukan anda salah!\n\n";
		system("pause");
		goto ulang;
	}
}
