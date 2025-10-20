#include<iostream>
using namespace std;

int hasil;

//function a
void jumlah(int x, int y)
{
	hasil=x+y;
}

//main function
int main()
{
	int a,b;
	cout<<"bilangan ke-1 = ";cin>>a;
	cout<<"bilangan ke-2 = ";cin>>b;
	jumlah(a,b);
	
	cout<<"Jumlah = "<<hasil;
}