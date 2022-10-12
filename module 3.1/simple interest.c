//wap to find simple interest
#include<stdio.h>

void main()
{

    int p,r,n,a;
    printf("enter amount:");
    scanf("%d%d%d",&p,&r,&n);
    
    a=(p*r*n)/100;
    
    printf("\n simple interest:%d",a);
}
