//wap to find area of  pi 3.14
#include<stdio.h>
#define pi 3.14

void main()
{
    int a,b,c;
    float r,l;
    //radius of circle
    printf("enter radius of circle:");
    scanf("%f",&r);
    printf("Area of Circle %f\n",pi*r*r);
    
    //radius of rectangle
    printf("enter radius of rectangle:");
    scanf("%f%f",&l,&b);
    
    printf("Area of rectangle %f\n",l*b);
    
   //radius of triangle 
   printf("enter radius of  triangle");
    scanf("%d%d%d",&a,&b,&c);
    
    printf("Area of triangle %d\n",a+b+c);

}
