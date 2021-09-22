#include<iostream>
#include<iomanip>

using namespace std;

int main ()

{
	float C,F,K,R;
	
	//Judul
	cout<<"Konversi Suhu"<<endl;
	
	//Input suhu
	cout<<"Suhu dalam celsius:";	
	cin>>C;
	
	//Rumus konversi suhu
	F=(9.0/5.0*C)+32;
	K=273+C;
	R=(4.0/5.0*C)+32;
	
	//Output hasil konversi suhu
	cout<<"\nHasil Konversi ke:"<<setw(2)<<endl;
	cout<<"Fahrenheit"<<setw(8)<<":"<<F<<endl;
	cout<<"Kelvin"<<setw(12)<<":"<<K<<endl;
	cout<<"Reamur"<<setw(12)<<":"<<R<<endl;
	
	return 0;
	
			
}
