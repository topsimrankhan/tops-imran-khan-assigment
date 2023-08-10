//Define a class to represent a bank account. Include the following members:


#include<iostream>
using namespace std;

class bankaccount
{
	public:
		string account_type,depositor_name;
		int account_num,account_balance;
		int withdraw_amount,deposited_amount,total_amount;
		
		void getdata()
		{
			cout<<"enter the depositor name : ";
			cin>>depositor_name;
			cout<<"enter the account number : ";
			cin>>account_num;
			cout<<"enter the type of account : ";
			cin>>account_type;
			cout<<"enter the Balance amount in the account : ";
			cin>>account_balance;
		}
		void deposited()
		{
			cout<<endl<<"        Deposite         "<<endl;
			cout<<"enter the amount that deposited : ";
			cin>>deposited_amount;
		}
		void withdraw()
		{
			total_amount=account_balance+deposited_amount;
			cout<<"account balance after deposited: "<<total_amount<<endl;
			cout<<endl<<"        withdraw         "<<endl;
			cout<<"enter the amount that withdraw : ";
			cin>>withdraw_amount;
		}
		void display()
		{
			cout<<"depositor name : "<<depositor_name<<endl;
			cout<<"total balance after witdhraw : "<<total_amount-withdraw_amount;
		}
};

int main()
{
	bankaccount obj;
	obj.getdata();
	obj.deposited();
	obj.withdraw();
	obj.display();
	return 0;
}

