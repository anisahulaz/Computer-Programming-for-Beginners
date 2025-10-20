#include<iostream>
using namespace std;

int luas, keliling;

//function a
void persegi(int x, int y)
{
	luas=x*y;
	keliling=(2*x)+(2*y);
}

//main function
int main()
{
	int a,b;
	cout<<"bilangan ke-1 = ";cin>>a;
	cout<<"bilangan ke-2 = ";cin>>b;
	persegi(a,b);
	
	cout<<"Luas persegi = "<<luas<<endl;
	cout<<"Keliling persegi = "<<keliling<<endl;
}