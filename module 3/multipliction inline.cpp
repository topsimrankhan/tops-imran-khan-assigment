//Write a program to find the multiplication values and the cubic values using inline function


#include<iostream>
using namespace std;

inline void values()
{
	int x,y;
	
	cout<<"enter the values : ";
	cin>>x>>y;
	
	cout<<endl<<"multilpication of two values : "<<x*y<<endl;
	cout<<"cubic value of first value : "<<x*x*x<<endl;
	cout<<"cubic value of second value : "<<y*y*y;
}



int main()
{
	values();
	return 0;
}

