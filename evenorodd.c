/*Looping programs:   
2.	WAP to take 10 no. Input from user and find out …   
3.	How many Even numbers are there  
4.	How many odd numbers are there  
5.	Sum of even numbers   
6.	Sum of odd numbers  
*/  



#include<stdio.h>

void main()
{
     
    
    
   
	int n,i,count=0,counta=0,even_sum=0,odd_sum=0;
	
	printf("enter number:");
	scanf("%d",&n);
	

					
	
		for(i=0; i<=n; i++)
			{
				if(i % 2 == 0)
				{					
					even_sum=even_sum+i;	
					count++;
				}
					else{
					
						
					odd_sum=odd_sum+i;
					counta++;
				}
			
			}
				printf("sum=%d",even_sum);
			printf("\ntotal even number :%d\n",count);
						
		printf("\nsum=%d",odd_sum);
			printf("\ntotal odd number:%d\n",counta);
				

}
