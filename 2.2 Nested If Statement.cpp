#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	float D;
	
	cout<<"Bentuk umum persamaan kuadrat ax^2+bx+c=0\n";
	cout<<"Inputkan a = "; cin>>a;
	cout<<"Inputkan b = "; cin>>b;
	cout<<"Inputkan c = "; cin>>c;
	
	D=b*b-4*a*c;
	if(D>=0)
	{
		if(D>0)
		cout<<"Memiliki 2 akar real\n";
		else
		cout<<"Memiliki akar kembar\n";
	}
	else
	cout<<"Memiliki akar imajiner\n";
	
	system("pause");
	return 0;
}