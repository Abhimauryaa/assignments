//Write a program to find out the max number from given array using function

#include<stdio.h>
void main()
{
	int a[50],max=0,n;
	int i;
	printf("enter the number :");
	scanf("%d",&n);
	
	for(i=0; i<n; i++)
	{
		printf("enter number %d:",i+1);
		scanf("%d",&a[i]);
		
	}
	
	max=a[0];	
	for(i=1; i<n; i++)
	{
		if(max<a[i])
		{
		
			max=a[i];
		}
	}
	printf("max number is:%d",max);
}
	
