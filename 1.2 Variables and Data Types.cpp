//program luas & keliling segitiga sama kaki
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	//deklarasi variabel
	int a, t; 
	float s_miring, luas, keliling;
	
	//input data
	cout<<" inputkan alas = "; cin>>a;
	cout<<" inputkan tinggi = "; cin>>t;
	
	//proses
	s_miring=sqrt(a*a+t+t);
	luas = 0.5*a*t;
	keliling = a+t+s_miring;
	
	//tampilan hasil
	cout<<"luas segitiga = "<<luas<<endl;
	cout<<"keliling segitiga = "<<keliling<<endl;
	
	//mencegah program tertutup
	system("pause");
	
	//mereset
	return 0;
}