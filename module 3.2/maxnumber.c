//Write a program to find out the max from given number (E.g., No: -1562 Max number is 6) 

#include<stdio.h>
void main()
{

int i,rem1,rem,max=0;
int n=1562;


while(n!=0)
{
	rem=n%10;
	n=n/10;
	if(max<rem)
	{
		max=rem;
	}	
	rem=n%10;
	n=n/10;
	rem1=n%10;
	rem1+n;
}
}


