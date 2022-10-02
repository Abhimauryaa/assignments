//WAP Find out length of string without using inbuilt function           
#include<stdio.h>

void main()
{
	char str[50];
	int len=0;
	
	printf("enter string:");
	scanf("%c",&str);
	
	while(str[len]='\0')
	{
		len++;	
	}
	printf("string length:%d",len);
}
