//WAP to show difference between Structure and Union.

/* 

Struct : struct statement defines a new data type with more than one member.
--> every member is assigned a unique memory location.

Union : unions provide an efficient way of using the same memory location for multiple purpose.
--> all the datamembers share a memory location. */

#include<stdio.h>

struct employee
{
	int empno;
	char empname[20];
	char address[30];
	int age;
}emp;


struct student
{
	int no;
	char name[20];
	char address[30];
	int age;
}std;

void main()
{
		
	printf("enter 5 employee detail:\n");
	
		
		printf("\nenter empployee no:");
		scanf("%d",&emp.empno);
		
		printf("enter empployee name:");
		scanf("%s",&emp.empname);
		
		printf("enter address:");
		scanf("%s",&emp.address);
		
		printf("enter age:");
		scanf("%d",&emp.age);

		printf("view employee detail:\n");
		printf("\n\n employee number:%d",emp.empno);
		printf("\n employee name:%s",emp.empname);
		printf("\n employee address:%s",emp.address);
		printf("\n employee age:%d",emp.age);	
	
printf("\n___union data___\n");
printf("student detail:");	
		printf("\nenter student no:");
		scanf("%d",&std.no);
		
		printf("enter student name:");
		scanf("%s",&std.name);
		
		printf("enter address:");
		scanf("%s",&std.address);
		
		printf("enter age:");
		scanf("%d",&std.age);

		printf("view student detail:\n");
		printf("\n\n student number:%d",std.no);
		printf("\n student name:%s",std.name);
		printf("\n student address:%s",std.address);
		printf("\n student age:%d",std.age);	
	
	
}



