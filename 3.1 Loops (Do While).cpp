#include<iostream>
using namespace std;

int main() {
	
	int i, batas;
	cout<<"Inputkan batas = "; cin>>batas;
	i=1;
	do
	{
		cout<<i<<". Belajar Perulangan\n";
		i++;
	}
	while(i<=batas);
	system("pause");
	return 0;
}