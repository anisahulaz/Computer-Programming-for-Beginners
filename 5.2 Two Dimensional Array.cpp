#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	
	int i, j;
	int a[2][2];
	int b[2][2];
	int c[2][2];
	cout<<"Program jumlah matriks 2x2:\n";
	cout<<"Input elemen matriks A\n";
	for(i=0;i<2;i++)
		for(j=0;j<2;j++)
		{
			cout<<"A["<<(i+1)<<","<<(j+1)<<"]= ";
			cin>>a[i][j];
		}
	cout<<"Input elemen matriks B\n";
	for(i=0;i<2;i++)
		for(j=0;j<2;j++)
		{
			cout<<"B["<<(i+1)<<","<<(j+1)<<"]= ";
			cin>>b[i][j];
		}
	for(i=0;i<2;i++)
		for(j=0;j<2;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	cout<<"Hasil jumlah A+B = \n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<c[i][j]<<setw(5);
		}
	cout<<endl;
	}
	
	system("pause");
	return 0;
}