#include<iostream>
using namespace std;

struct PersonRec
{
	string lastname;
	string firstname;
	int age;
};

int main()
{
	PersonRec thePerson;
	cout<<"Enter First Name: "; cin>>thePerson.firstname;
	cout<<"Enter Last Name: "; cin>>thePerson.lastname;
	cout<<"Enter Age: "; cin>>thePerson.age;
	
	cout<<"Hello "<<thePerson.firstname<<" "<<thePerson.lastname;
	cout<<". How are you?";
	cout<<"Congratulation on reaching the age of "<<thePerson.age<<endl;
	
	system("pause");
	return 0;
}
