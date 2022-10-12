//WAP to create simple calculator using class

#include<iostream>

using namespace std;

class calculator
{
	int a,b;
	int sum,sub,mul,div;
	
	public:
	
	 void data()
	 {
	 	cout<<"enter number1:";
	 	cin>>a;
	 	
	 	cout<<"enter number2:";
	 	cin>>b;
	 }

	void addition()
	{
		sum=a+b;
		cout<<"addition:"<<a<<"+"<<b<<endl;
		cout<<"sum:"<<sum<<endl;
	}
	
	void substraction()
	{
		sub=a-b;
		cout<<"substraction:"<<a<<"-"<<b<<endl;
		cout<<"sub:"<<sub<<endl;
	}
	
	void multiplication()
	{
		mul=a*b;
		cout<<"multiplication:"<<a<<"*"<<b<<endl;
		cout<<"mul:"<<mul<<endl;;
	}
	
	void division()
	{
		div=a/b;
		cout<<"division:"<<a<<"/"<<b<<endl;
		cout<<"div:"<<div<<endl;
			}
};

int main()
{
	calculator c;
	c.data();
	c.addition();
	c.substraction();
	c.multiplication();
	c.division();
}
