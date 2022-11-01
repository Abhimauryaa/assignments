//WAP to find factorial using recursion


#include<stdio.h>
int fact(int f){
    
    if (f != 0)
    {
      return (f*fact(f-1));
    }
    else
    {
        return 1;
    }
}
void main()
{
	int n;
	printf("enter number:");
	scanf("%d",&n);
	printf("factorial %d is=%d",n,fact(n));
}
