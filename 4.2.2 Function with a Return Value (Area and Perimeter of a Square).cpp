#include<iostream>
using namespace std;

//function a
int luas_persegi(int x, int y)
{
	return x*y;
}

//function b
int keliling_persegi(int x, int y)
{
	return (2*x)+(2*y);
}

//main function
int main()
{
	int a,b;
	cout<<"bilangan ke-1 = ";cin>>a;
	cout<<"bilangan ke-2 = ";cin>>b;
	
	cout<<"Luas persegi = "<<luas_persegi(a,b)<<endl;
	cout<<"Keliling persegi = "<<keliling_persegi(a,b)<<endl;
}