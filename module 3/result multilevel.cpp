//Assume that the test results of a batch of students are stored in three different classes. 
//Class Students are storing the roll number. 
//Class Test stores the marks obtained in two subjects and class result contains 
//the total marks obtained in the test. The class result can inherit the details of the marks 
//obtained in the test and roll number of students. (Multilevel Inheritance)

#include<iostream>
using namespace std;

class students
{
	public:
	int roll_num;
	void getdata()
	{
		cout<<"enter roll number of student : ";
		cin>>roll_num;
	}	
};

class test:public students
{
	public:
	int marks1,marks2;	
	void getdata1()
	{
		cout<<"enter the marks obtained in 1st subject : ";
		cin>>marks1;
		cout<<"enter the marks obtained in 2nd subject : ";
		cin>>marks2;
	}	
};

class result:public test
{
	public:

	void setdata()
	{
		cout<<endl<<" roll number of student : "<<roll_num<<endl;
		cout<<"enter the total marks obtained in two subject : "<<marks1+marks2<<endl;
	}	
};


int main()
{
	result obj;
	obj.getdata();
	obj.getdata1();
	obj.setdata();
	
	
	return 0;
}

