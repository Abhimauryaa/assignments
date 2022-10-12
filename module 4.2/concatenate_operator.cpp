//Write a program to concatenate the two strings using Operator Overloading.


#include<iostream>
//#include<string.h>
using namespace std;

class star
{
	protected:
		char str[20];
		
		public:
		void accept_str()
		{
			cout<<"enter string:";
			cin>>str;
		}
		void display()
		{
			cout<<str;
		}	
	void operator+(star a)
	{
		string obj;
		strcat(str,a.str);
		strcpy(obj.)
		return s;
	}
};

int main()
{
	star str1,str2,str3;

	
	//cout<<"first string:";
	str1.accept_str();
	
	//cout<<"second string";
	str2.accept_str();
	
	str3=str1+str2;
//	overloaded '+' operator
	cout<<"concatenated string is:";
	str3.display();
	
}
