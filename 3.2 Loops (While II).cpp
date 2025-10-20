#include<iostream>
using namespace std;

int main() {
	
	int i, batas, jumlah;
	cout<<"Inputkan batas = "; cin>>batas;
	i=1;
	jumlah=0;
	while(i<=batas)
	{
		cout<<i<<"\n";
		jumlah+=i; //jumlah=jumlah+i
		i++; //i=i+1
	}
	cout<<"Jumlah = "<<jumlah<<endl;
	system("pause");
	return 0;
}