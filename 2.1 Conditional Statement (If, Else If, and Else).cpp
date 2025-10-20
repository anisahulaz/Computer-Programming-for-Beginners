//program kelulusan
#include<iostream>
using namespace std;

int main()
{
	int nilai;
	cout<<"Inputkan nilai mahasiswa = "; cin>>nilai;
	if(nilai>=55 && nilai<=100)
	cout<<"Lulus\n";
	else 
		if (nilai>=0 && nilai<=54)
		cout<<"Tidak lulus\n";
		else
		cout<<"Salah input\n";
	
	system("pause");
	return 0;
	
}