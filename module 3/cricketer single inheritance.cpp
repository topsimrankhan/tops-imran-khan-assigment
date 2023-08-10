/*Assume a class cricketer is declared. Declare a derived class batsman from cricketer. 
Data member of batsman. Total runs, Average runs and best performance. 
Member functions input data, calculate average runs, Display data. (Single Inheritance)*/

#include<iostream>
using namespace std;

class cricketer
{
	public:
};

class batsman:public cricketer
{
	public:
		int total_runs,average_runs,best_performence,innings,not_out;
		
		void getdata()
		{
			cout<<"enter the total runs : ";
			cin>>total_runs;
			cout<<"enter the number of innings : ";
			cin>>innings;
			cout<<"enter the number of times the player remained not out : ";
			cin>>not_out;
			cout<<"enter the best performence : ";
			cin>>best_performence;
		}
		void setdata()
		{
			cout<<"Total runs of the player : "<<total_runs<<endl;
			cout<<"Avarage runs :"<<total_runs/(innings-not_out)<<endl;
			cout<<"Best performence [highest runs] : "<<best_performence;
		}
};



int main()
{
	batsman obj;
	obj.getdata();
	cout<<endl;
	obj.setdata();
	return 0;
}

