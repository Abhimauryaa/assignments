// Write a program make a summation of given number (E.g., 1523 Ans: -11)





#include<stdio.h>

void main()
{
     
    
    
   
	int n,i,sum=0;
	
	printf("enter number:");
	scanf("%d",&n);
	

					
	
		while(n!=0)
			{				
				sum+=n%10;
				n=n/10;	
					
		}
								printf("sum=%d",sum);

}
