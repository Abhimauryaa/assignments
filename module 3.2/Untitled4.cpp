

#include<stdio.h>
void main()
{

int n,sum=0,fd,ld;

printf("enter number:");
scanf("%d",&n);

while(n!=0)
{
	ld=n%10;
	n=n/10;
}
	fd=n;
	sum=fd+ld;
	printf("%d",sum);

}
