//Write a program to calculate the area of circle, rectangle and triangle using Function Overloading

 
#include<iostream>
using namespace std;


class calculate
{
	public:
	void area(int a,int b)
	{
		cout<<"area of rectangle = "<<a*b<<endl;
	}
	void area(double a,int b)
	{
		cout<<"area of triangle = "<<a*b/2<<endl;
	}	
	void area(double a,double b)
	{
		cout<<"area of circle = "<<a*b<<endl;
	}	
};

int main()
{
	calculate obj;
	obj.area(2,5);
	obj.area(2.5,2);
	obj.area(2.5,2.5);
	return 0;
}

