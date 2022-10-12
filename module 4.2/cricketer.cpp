/*Assume a class cricketer is declared. Declare a derived class batsman from cricketer. Data member of batsman. Total runs, Average runs and best performance. Member functions input data, calculate average runs, Display data. (Single Inheritance)*/

#include<iostream>

using namespace std;

class cricketer
{
	protected:
	string name;
	int total_run,ing;
	float average;
	string best_per;
	
	public:
		
		void member()
		{
			cout<<"enter batsman name:";
			cin>>name;
		}


	
};
class batsman:public cricketer{
	
	public:
	void data()
	{
		cout<<endl<<"total runs:";
		cin>>total_run;
		
		
		cout<<endl<<"enter innings:";
		cin>>ing;

		cout<<endl<<"best performance:";
		cin>>best_per;
		
	}
	
	
	void display()
	{
		cout<<"total runs:"<<total_run<<endl;
		
		average = total_run / ing;
		cout<<"average:"<<average<<endl;
		
		cout<<"best performance:"<<best_per<<endl;
	}
	

	

};

	

int main()
{
	batsman b;
	b.member();
	b.data();
	cout<<"display data:"<<endl;
	b.display();
}
