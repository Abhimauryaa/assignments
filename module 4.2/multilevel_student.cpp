//Assume that the test results of a batch of students are stored in three different classes. Class Students are storing the roll number. Class Test stores the marks obtained in two subjects and class result contains the total marks obtained in the test. The class result can inherit the details of the marks obtained in the test and roll number of students. (Multilevel Inheritance)

#include<iostream>
using namespace std;

class students{
	protected:
	int roll_no;
	
	public:
	void num()
	{
		cout<<"enter roll number:";
		cin>>roll_no;
	}
};

class test:public students{
	protected:
	int english,hindi;
	public:
	void sub()
	{
		cout<<"english: ";
		cin>>english;
		
		cout<<"hindi: ";
		cin>>hindi;
	}
};

class result:public test{
	protected:
	int total;
	
	public:
	void total_m()
	{
		total=english+hindi;
	
	}
	
	void display()
	{
		cout<<"rolll_no:"<<roll_no<<endl;
		cout<<"english:"<<english<<endl;
		cout<<"hindi:"<<hindi<<endl;
		cout<<"total mark:"<<total<<endl;
	}
};
int main()
{
	result r;
	r.num();
	r.sub();
	r.total_m();
	
	cout<<endl<<"details of student1:"<<endl;
	r.display();
	
	r.num();
	r.sub();
	r.total_m();
	
	cout<<endl<<"details of student2:"<<endl;
	r.display();
}
