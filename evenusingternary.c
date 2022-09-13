//wap find even or odd number using ternary operator

#include<stdio.h>

void main()
{
	int n;
	
	printf("enter number:");
	scanf("%d",&n);

	(n % 2 == 0) ?
	
		printf("%d is even number\n",n):printf("%d is odd number\n",n);
			
}
