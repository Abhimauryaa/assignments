/*Define a class to represent a bank account. Include the following members:
1. Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account

2. Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance*/

#include<iostream>
using namespace std;

class bank
{
	char name[30];
	int acc_no;
	char acc_type[30];
	int bal,dep;
	
	public:
	void data()
	{
		cout<<"enter name:";
		cin>>name;
		
		cout<<"enter account no:";
		cin>>acc_no;
		
		cout<<"enter account type:";
		cin>>acc_type;
		
		cout<<"enter balance:";
		cin>>bal;
	}
	
	void display()
	{
		cout<<"-----bank detail-----"<<endl;
		cout<<"name:"<<name<<endl;
		cout<<"account no:"<<acc_no<<endl;
		cout<<"account type:"<<acc_type<<endl;
		
		
	}
	
	void deposite()
	{
		cout<<endl<<"enter deposite amount:";
		cin>>dep;
	}	
	
	void check_balance()
	{
		int a;
		a = bal + dep;	
		cout<<"balance:"<<a<<endl;
	}
};

int main()
{
	bank b;
	b.data();
	b.deposite();
	b.display();	
	b.check_balance();
}




