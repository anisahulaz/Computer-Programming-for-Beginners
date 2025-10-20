#include<iostream>
using namespace std;

struct PersonRec
{
	string lastname;
	string firstname;
	int age;
};

typedef PersonRec PeopleArrayType[3];
void LoadArray(PeopleArrayType peop);

void LoadArray(PeopleArrayType peop)
{
	for (int i=0;i<3;i++)
	{
		cout<<"Enter First Name: "; cin>>peop[i].firstname;
		cout<<"Enter Last Name: "; cin>>peop[i].lastname;
		cout<<"Enter Age: "; cin>>peop[i].age;
	}
}

int main()
{
	PeopleArrayType people;
	LoadArray(people);
	string name;
	
	cout<<"Enter last name : "; cin>>name;
	for (int i=0;i<3;i++)
	{
		if(people[i].lastname==name)
		{
			cout<<endl<<people[i].firstname<<" "<<people[i].lastname
			<<" \n age"<<people[i].age<<endl;
		}
	}
}