#include<iostream>
using namespace std;
int main(){
	int kode;
	cout<<"Kode obat 1-5. Inputkan kode obat = ";
	cin>>kode;
	switch(kode)
	{
		case 1:cout<<"Proris\n";break;
		case 2:cout<<"Laserin\n";break;
		case 3:cout<<"Scaven\n";break;
		case 4:cout<<"Stimuno\n";break;
		case 5:cout<<"Paracetamol\n";break;
		default:cout<<"Salah kode\n";
	}
	system("pause");
	return 0;
}