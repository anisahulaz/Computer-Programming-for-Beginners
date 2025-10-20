#include<iostream>
using namespace std;

int main(){
	
	int i, jum;
	float rata;
	
	int A[5]={87, 76, 90, 54, 54};
	jum=0;
	for(i=0;i<5;i++)
	{
		jum+=A[i];
		rata=jum/5;
	}
	cout<<"Tampilkan salah satu elemen array\n";
	cout<<"Elemen ke-2\n";
	cout<<A[1]<<endl;
	cout<<"Jumlah = "<<jum<<endl;
	cout<<"Rata-rata = "<<rata<<endl;
	
	system("pause");
	return 0;
}