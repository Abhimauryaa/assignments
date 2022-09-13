//wap to show monday to sunday using switch case

#include<stdio.h>

void main()
{
    int a,b; 
    int ch;
    
    printf("enter choice:");
    scanf("%d",&ch);  
    switch(ch)
    {
        case 1 :
        printf("sunday");
        break;
                 
        case 2 :
        printf("monday");
       break;
                 
        case 3 :
        printf("tuesday");
        break;
                 
        case 4 :
        printf("wednesday");
        break;
                 
        case 5 :
        printf("thursday");
       break;
                 
        case 6 :
        printf("friday");
        break;
                 
        case 7 :
        printf("saturday");
        break;
        
        default:
        	printf("you enter wrong choice:\n");
}
}
