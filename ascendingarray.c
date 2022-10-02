//WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice

#include<stdio.h>

void main()
{
	int i,j,a[100],n;
	int  ch;
	
	printf("enter number:");
	scanf("%d",&n);
	
	
	printf("enter number:");
	for(i=0; i<n; i++)
	{
		scanf("%d",a[i]);
	}
	while(1)
	{
		printf("1.ascending:\n");
		printf("1.descending:\n");
		printf("enter your choice:\n");
		scanf("%d",&ch);
	
	switch(ch)
	{
		printf("\n array ascending or descending:");
		
		
	case 1:
		

		printf("enter first array:\n");
		for(i=0; i<n; i++)
		{
			for(j=i+1; j<n; j++)
			{
				if(a[i]>a[j])
				{
					int tmp=a[i];
					a[i]=a[j];
					a[j]=tmp;
				
				}	
			}
		}
		
		printf("ascending numbers:");
		`
	break;
		
	case 2:
	printf("Ascending:\t");
	
	for(i=0; i<n; i++)
	{
		printf("%d",a[i]);
	}
	
	for(i=0; i<n; i++)	
	{
		for(j=0; j<n; j++)
		{
				if(a[j]<a[i]) 
				{
				int tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
																											}                                                                                            
		}
	}
}

break;

	case 3:
	printf("\n\ndescending:\t");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
break;
}

