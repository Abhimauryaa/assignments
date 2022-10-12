#include<stdio.h>

void main()
{
	int b;
	float a,d;
	float y;
	
	printf("Enter total days = ");
	scanf("%f",&a);
	
	y = a/365;
	
	printf("year = %f", y);
	
	
	
	
	printf("\nEnter total year = ");
	scanf("%d",&b);
	
	d = b%365;
	
	printf("days = %d", d);
}
