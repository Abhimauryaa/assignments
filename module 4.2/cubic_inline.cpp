//Write a program to find the multiplication values and the cubic values using inline function.

#include<iostream>
using namespace std;

class A{
	
	int a,b;
	public:
	
	void data()
	{
		cout<<"enter value1:";
		cin>>a;
		
		cout<<"enter value2:";
		cin>>b;
	}
	inline void multiplication()
	{
		cout<<"multiplication="<<a*b<<endl;
	}
	
	inline void cubic()
	{
		cout<<"cubic="<<a*a*a<<endl;
		cout<<"cubic="<<b*b*b<<endl;
	}
};

int main()
{
	A a;
	a.data();
	a.multiplication();
	a.cubic();
}
