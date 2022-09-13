// WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746 

#include<stdio.h>
void main()
{

int rem;
int no=64728;

while(no!=0)
{
	rem=no%10;
	no=no/10;
	printf("%d",rem);
}
}
