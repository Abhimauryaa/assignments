//WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array 


#include<stdio.h>
void main()
{
	int first[10][10],second[10][10],sum[10][10],sub[10][10],mul[10][10],i,j,m,n;
	
	printf("enter number of row & column:");
	scanf("%d%d",&m,&n);
	
	printf("enter first matrix:\n");
	for(i=0; i<m; i++)
	{
		for(j=0; j<=n; j++)
		{
			scanf("%d",&first[i][j]);
		}
	}
	
	printf("enter second matrix:\n");
	for(i=0; i<m; i++)
	{
		for(j=0; j<=n; j++)
		{
			scanf("%d",&second[i][j]);
		}
	}
	
	printf("addition of matrix:\n");
	for(i=0; i<m; i++)
	{
		for(j=0; j<=n; j++)
		{
			sum[i][j]=first[i][j]+second[i][j];
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}

	printf("substraction of matrix:\n");
	for(i=0; i<m; i++)
	{
		for(j=0; j<=n; j++)
		{
			sub[i][j]=first[i][j]-second[i][j];
			printf("%d\t",sub[i][j]);
		}
		printf("\n");
	}

	printf("multiplication of matrix:\n");
	for(i=0; i<m; i++)
	{
		for(j=0; j<=n; j++)
		{
			mul[i][j]=first[i][j]*second[i][j];
			printf("%d\t",mul[i][j]);
		}
		printf("\n");
	}

}
