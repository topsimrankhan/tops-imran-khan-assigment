/*Write a program to Mathematic operation like Addition, Subtraction, Multiplication, Division Of two number 
using different parameters and Function Overloading*/

#include<iostream>
using namespace std;

class operation
{
	public:
		void math(int a,double b)
		{
			cout<<"addition of two number = "<<a+b<<endl;
		}
		void math(double c,int d)
		{
			cout<<"subtraction of two number = "<<c-d<<endl;
		}
		void math(double a,double b,int c)
		{
			cout<<"multiplication of two number = "<<a*b*c<<endl;
		}
		void math(double c,double d)
		{
			cout<<"division of two number = "<<c/d<<endl;
		}
};


int main()
{
	operation obj;
	obj.math(5,4.2);
	obj.math(6.1,4);
	obj.math(7.1,8.1,4);
	obj.math(8.1,9.1);
	return 0;
}

