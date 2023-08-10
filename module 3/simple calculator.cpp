//WAP to create simple calculator using class


#include<iostream>
using namespace std;

class calculator
{
	public:
		int a,b;
		
		
		void getdata()
		{
			cout<<"enter the value of a : ";
			cin>>a;
			
			cout<<"enter the value of b : ";
			cin>>b;
		}
		
		
		void setdata()
		{
			cout<<endl<<"addition = "<<a+b<<endl;
			cout<<"subtraction = "<<a-b<<endl;
			cout<<"multiplication = "<<a*b<<endl;
			cout<<"divison = "<<a/b<<endl;
		}
};



int main()
{
	calculator obj;
	obj.getdata();
	cout<<endl<<"-----Simple Calculator-----"<<endl;
	obj.setdata();
	
	
	return 0;
}

