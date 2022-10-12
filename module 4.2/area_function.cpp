/*Write a program to calculate the area of circle, rectangle and triangle using Function Overloading
„« Rectangle: Area * breadth
„« Triangle: . *Area* breadth
„« Circle: Pi * Area *Area*/

#include<iostream>
using namespace std;

class calc
{
	public:
	void area(int length, int breadth)
	{
			cout<<"area of rectangle:"<<length*breadth<<endl;
	}
	void area(double height, int base)
	{
			cout<<"area of triangle:"<<(0.5)*height*base<<endl;
	}	
	void area(int radius)
	{
			cout<<"area of circle:"<<3.14*radius*radius<<endl;
	}
};

int main()
{
	calc c;
	c.area(20,30);
	c.area(5.2,10);
	c.area(5);
}
