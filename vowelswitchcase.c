//wap to show vowel or consonant using switch case

#include<stdio.h>

void main()
{
     
    char ch;
    
    printf("enter choice:");
    scanf("%c",&ch);  
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        printf("%c is vowel",ch);
        break;
                 
      
        
        default:
        	printf("%c is consonant:\n",ch);
        	
}
}
