//WAP to print factorial of given number 

#include<stdio.h>

void main()
{
	int i,n,fact=1;
	printf("enter number:");
	scanf("%d",&n);
	
	
	for(i=1; i<=n; i++)
	{
		
		fact=fact*i;
	}
		printf("factorial number %d is %d",n,fact);
}
