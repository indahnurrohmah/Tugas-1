#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int main()

{
	string nama,nim,plug;
	int jumlahstrip;
	
	//Input Data
	cout<<"Masukkan :"<<endl;
		
	cout<<"Nama"<<setw(8)<<": ";
	getline(cin,nama);
	
	cout<<"NIM"<<setw(9)<<": ";
	getline(cin,nim);
	
	cout<<"Plug"<<setw(8)<<": ";
	getline(cin,plug);
	
	
	//Output data
	cout<<endl<<"Inilah data Anda :"<<endl;
	cout<<"Nama"<<setw(8)<<": "<<nama<<endl;
	cout<<"NIM"<<setw(9)<<": "<<nim<<endl;
	cout<<"Plug"<<setw(8)<<": "<<plug<<endl;
	
	
	//Menghitung jumlah karakter
	jumlahstrip=nama.length()+nim.length()+plug.length()+6+11;
	
	
	//Tabel
	/* Membuat baris pertama(header) */
	cout<<endl<<"Dalam bentuk tabel :"<<endl;
	
	cout<<setfill('=')<<setw(jumlahstrip-2)<<"="
		<<endl;
		
	cout<<setfill(' ')
		<<"NIM"<<setw(nim.length())
		<<"|"<<setw(7)<<"Nama"<<setw(nama.length())
		<<"|"<<setw(7)<<"Plug"<<setw(plug.length())
		<<endl;
	
	cout<<setfill('=')<<setw(jumlahstrip-2)<<"="
		<<endl;
	
	/* Membuat baris kedua */
	cout<<setfill(' ')
		<<nim<<setw(3)
		<<"|"<<setw(nama.length()+3)<<nama<<setw(4)
		<<"|"<<setw(plug.length()+3)<<plug<<setw(5)
		<<endl;
	
	cout<<setfill('=')<<setw(jumlahstrip-2)<<"="
		<<endl;
	
	return 0;
	
}
	
