//Write a Program of Two 1D Matrix Addition using Operator Overloading.

#include<iostream>
using namespace std;

class matrix
{
	int a[20];
	public:
		void data()
		{	
		int i;
		
			for(i=0; i<2; i++)
			{
				cout<<"enter value:";
				cin>>a[i];
			}	
		}
		void display()
		{
			int i;
			
			for(i=0; i<2; i++)
			{
				cout<<a[i]<<"\t";
			}
			cout<<endl;
		}
		
		void operator+(matrix m)
		{
			int temp[10];
			int i;
			for(i=0; i<2; i++)
			{
				temp[i]=a[i]+m.a[i];	
			}
			cout<<"sum matrix:";
			
			for(i=0; i<2; i++)
			{
				cout<<temp[i]<<"\t";
			}
		}
};

int main()
{
	matrix val1;
	matrix val2;
	
	cout<<"enter matrix 1 value:"<<endl;
	val1.data();
	cout<<"enter matrix 2 value:"<<endl;
	val2.data();
	
	cout<<"matrix 1 value:";
	val1.display();
	
	cout<<"matrix 2 value:";
	val2.display();
	
	val1+val2;
}

