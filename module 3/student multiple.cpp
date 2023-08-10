/*Create a class person having members name and age. Derive a class student having member percentage. 
Derive another class teacher having member salary. 
Write necessary member function to initialize, read and write data. 
Write also Main function (Multiple Inheritance)*/

#include<iostream>
using namespace std;


class person
{
	public:
		int age;
		string name;
		
		void getdata()
		{
			cout<<"enter the name of the student : ";
			cin>>name;
			cout<<"enter the age of the student : ";
			cin>>age;
		}
};

class student
{
	public:
		int percentage;
		void getdata2()
		{
			cout<<"enter the percentage of the student : ";
			cin>>percentage;
		}
};

class teacher:public person,public student
{
	public:
		int salary;
		void getdata3()
		{
			cout<<"enter the salary of the teacher : ";
			cin>>name;
		}
		void setdata()
		{
			cout<<endl<<"name of the student : "<<name<<endl;
			cout<<"age of the student : "<<age<<endl;
			cout<<"percentage of the student : "<<percentage<<endl;
			cout<<"salary of the teacher : "<<salary<<endl;	
		}
};



int main()
{
	teacher obj;
	obj.getdata();
	obj.getdata2();
	obj.getdata3();
	obj.setdata();
	return 0;
}



