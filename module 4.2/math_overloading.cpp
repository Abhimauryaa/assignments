//Write a program to Mathematic operation like Addition, Subtraction, Multiplication, Division Of two number using different parameters and Function Overloading.

#include<iostream>
using namespace std;

class A{
	int a,b;
	public:
	
	void calc(){
		cout<<"enter a:";
		cin>>a;
		
		cout<<"enter b:";
		cin>>b;
		cout<<"sum:"<<a+b<<endl;
	}
	void calc(double p, int q)
	{
		cout<<"substraction:"<<p-q<<endl;
	}
	
	void calc(int m, int n)
	{
		cout<<"multiplication:"<<m*n<<endl;
	}
	
	void calc(int x, double y)
	{
		cout<<"division:"<<x/y<<endl;
	}

};

int main()
{
	A a;
	a.calc();
	a.calc(20.2,10);
	a.calc(8,5);
	a.calc(10,2.5);

}
