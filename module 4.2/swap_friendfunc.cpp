//Write a program to swap the two numbers using friend function without using third variable

#include<iostream>
using namespace std;

class A{
	int a,b;
	public:
		A(){
			cout<<"enter value 1:";
			cin>>a;
			
			cout<<"enter val2:";
			cin>>b;
			
			cout<<"value:"<<a<<"\t"<<b<<endl;
		}
		friend void swap(A obj);
};

void swap(A obj){
	obj.a=obj.a*obj.b;
	obj.b=obj.a/obj.b;
	obj.a=obj.a/obj.b;
	cout<<"after swapping:"<<endl<<"a="<<obj.a<<"\t"<<"b="<<obj.b<<endl;
}

int main(){
	A obj2;
	swap(obj2);
}
