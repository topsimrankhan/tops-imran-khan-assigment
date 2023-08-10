//Write a program to concatenate the two strings using Operator Overloading


#include<iostream>
using namespace std;


class concatenate
{
	string a,b;
	public:
	void get(string x,string y)
	{
		a=x;
		b=y;
	}
	void operator +();
	void set();
};


void concatenate :: operator +()
{
	a+b;
}


void concatenate :: set()
{
	cout<<" "<<a+b<<endl;
}


int main()
{
	concatenate obj;
	obj.get("shivani","patel");
	+obj;
	obj.set();
	
	return 0;
}

