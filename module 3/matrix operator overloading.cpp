//Write a Program of Two 1D Matrix Addition using Operator Overloading

#include<iostream>
using namespace std;

class matrix
{
	int a[1][10];
	public:
		int size,i,j;
		
		void s()
		{
			cin>>size;
		}
		void add();
		void display();	
		void operator +(matrix x);
};
	
void matrix :: add()
{
	
	for(i=0;i<1;i++)
	{
		for(j=0;j<size;j++)
		{
		cin>>a[i][j];
		}
	}
}
void matrix :: display()
{
		
			for(i=0;i<1;i++)
			{
				for(j=0;j<size;j++)
				{
				cout<<" "<<a[i][j];
				}
				cout<<endl;
			}
				
}
void matrix :: operator +(matrix x)
{
	int m[1][10];
	for(i=0;i<1;i++)
	{
		for(j=0;j<size;j++)
		{
		 m[i][j]=a[i][j]+x.a[i][j];
		}
	}
	
	for(i=0;i<1;i++)
	{
		for(j=0;j<size;j++)
		{
		 cout<<m[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main()
{
	matrix m1;
	matrix m2;
	cout<<"enter the size of first matrix : ";
	m1.s();
	cout<<"enter the elements of first matrix :";
	m1.add();
	
	cout<<"enter the size of second matrix : ";
	m2.s();
	cout<<"enter the elements of second matrix :";
	m2.add();
	
	cout<<"Elements of the first matrix : ";
	m1.display();
	cout<<"Elements of the second matrix : ";
	m2.display();
	
	cout<<endl<<"addtion of two matrices : ";
	m1+m2;
	return 0;
}

