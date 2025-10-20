#include<iostream>
using namespace std;

struct GradeRec
{
	float percent;
	char grade;
};

struct StudentRec
{
	string lastname;
	string firstname;
	int age;
	GradeRec courseGrade;
};

int main()
{
	StudentRec student;
	cout<<"Enter First Name: "; cin>>student.firstname;
	cout<<"Enter Last Name: "; cin>>student.lastname;
	cout<<"Enter Age: "; cin>>student.age;
	cout<<"Enter overall percent: "; cin>>student.courseGrade.percent;
	
	if(student.courseGrade.percent>=90)
	{
		student.courseGrade.grade='A';
	}
	else if(student.courseGrade.percent>=75)
	{
		student.courseGrade.grade='B';
	}
	else
	{
		student.courseGrade.grade='F';
	}
	
	cout<<"Hello "<<student.firstname<<" "<<student.lastname;
	cout<<". How are you?";
	cout<<"Congratulation on reaching the age of "<<student.age<<endl;
	cout<<"\n Your overall percent score is "<<student.courseGrade.percent<<" for a grade of "<<student.courseGrade.grade;
	
	system("pause");
	return 0;
	
}