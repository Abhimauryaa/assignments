//Write a program of to sort the array using templates. 


#include<iostream>
using namespace std;

template <typename T>

class A
{
	private:
		T temp,i,j;
		T *a;
		
		int n;
		public:
			void getdata(int no)
			{
				n=no;
				a=new T[n];
				
				cout<<endl<<"enter data:"<<endl;
				for(int i=0; i<n; i++)
				{
					cin>>a[i];
				}
			}
			void sort()
			{
				for(int i=0;i<n;i++)
				{
					for(int j=i+1;j<n; j++)
					{
						if(a[i]>a[j])
						{
							temp=a[i];
							a[i]=a[j];
							a[j]=temp;
						}
					}
				}
			for(int i=0;i<n;i++)
			{
				cout<<a[i]<<endl;	
			}				
		}				
};

int main()
{
	int num;
	cout<<"enter the of data:";
	cin>>num;
	
	A <int>obj1;
	A <char>obj2;
	A <double>obj3;

	cout<<"enter integer data:"<<endl;
	obj1.getdata(num);
	
	cout<<"sorted integer:"<<endl;
	obj1.sort();
	
	cout<<"enter character data:"<<endl;
	obj2.getdata(num);
	
	cout<<"sorted character:"<<endl;
	obj2.sort();
	
	cout<<"enter double data:"<<endl;
	obj3.getdata(num);
	
	cout<<"sorted double:"<<endl;
	obj3.sort();
}
