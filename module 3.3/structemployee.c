//Write a program of structure employee that provides the following information -print and display empno, empname, address and age

#include<stdio.h>
# define n 2
struct emp
{
	int empno;
	char empname[20];
	char address[30];
	int age;
}e[n];

void main()
{
		int i;

		
	printf("enters employee detail:\n");
	for(i=0; i<n; i++)
		{
		printf("\nenter empployee no:");
		scanf("%d",&e[i].empno);
		
		printf("enter empployee name:");
		scanf("%s",&e[i].empname);
		
		printf("enter address:");
		scanf("%s",&e[i].address);
		
		printf("enter age:");
		scanf("%d",&e[i].age);
}
	for(i=0; i<n; i++)
	{
		printf("view employee detail:\n");
		printf("\n\n employee number:%d",e[i].empno);
		printf("\n employee name:%s",e[i].empname);
		printf("\n employee address:%s",e[i].address);
		printf("\n employee age:%d",e[i].age);	
	}
	
}
