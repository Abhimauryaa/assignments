//Write a program of Addition, Subtraction, Division, Multiplication using constructor.

#include<iostream>

using namespace std;

class calculate
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
		cout<<"ans:"<<sum<<endl;
	}
	
	void substraction()
	{
		sub=a-b;
		cout<<"substraction:"<<a<<"-"<<b<<endl;
		cout<<"ans:"<<sub<<endl;
	}
	
	void multiplication()
	{
		mul=a*b;
		cout<<"multiplication:"<<a<<"*"<<b<<endl;
		cout<<"ans:"<<mul<<endl;;
	}
	
	void division()
	{
		div=a/b;
		cout<<"division:"<<a<<"/"<<b<<endl;
		cout<<"ans:"<<div<<endl;
			}
};

int main()
{
	calculate c;
	c.data();
	c.addition();
	c.substraction();
	c.multiplication();
	c.division();
}
