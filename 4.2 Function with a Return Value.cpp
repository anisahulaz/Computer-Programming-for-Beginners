#include<iostream>
using namespace std;

//function a
int jumlah(int x, int y)
{
	return x+y;
}

//main function
int main()
{
	int a,b;
	cout<<"bilangan ke-1 = ";cin>>a;
	cout<<"bilangan ke-2 = ";cin>>b;
	
	cout<<"Jumlah = "<<jumlah(a,b);
}