//Create a class person having members name and age. Derive a class student having member percentage. Derive another class teacher having member salary. Write necessary member function to initialize, read and write data. Write also Main function (Multiple Inheritance)

#include<iostream>

using namespace std;

class person{
	
	protected:
	string name;
	int age;
	
	public:
	void data()
	{
		cout<<"enter name:"<<endl;
		cin>>name;
		
		cout<<"enter age:"<<endl;
		cin>>age;
	}
};

class student
{
	protected:
	float percentage;
	public:
	void per()
	{
		cout<<"percentage:"<<endl;
		cin>>percentage;
			
	}	
		
};

class teacher:public student, public person{
	
	int salary;
	public:
		void tech()
		{
			cout<<"salary:";
			cin>>salary;
		}
		
		void dis()
		{
			cout<<"name:"<<name<<endl;
			cout<<"age:"<<age<<endl;
			cout<<"percentage:"<<percentage<<endl;
			cout<<"salary:"<<salary<<endl;
		}
};
int main()
{
	teacher t;
	
	 t.data();
	 t.per();
	 t.tech();
	 t.dis();
}
