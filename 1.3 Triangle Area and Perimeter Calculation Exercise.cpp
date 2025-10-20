//program menghitung luas (L) dan Keliling (K)

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int a, L, K;
	
	cout<<"Masukkan sisi persegi = "; cin>>a;
	
	L=a*a;
	K=a+a+a+a;
	
	cout<<"Luas ="<<L<<endl;
	cout<<"Keliling ="<<K<<endl;
	
	system("pause");
	return 0;
}