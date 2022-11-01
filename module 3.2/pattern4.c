


#include <stdio.h>

int main()
{
    int i, j, n;

    printf("Enter rows: ");
    scanf("%d", &n);

    printf("*\n");

    for(i=1; i<=n; i++)
    {
        printf("*");
        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        for(j=i-1; j>=1; j--)
        {
            printf("*");
        }
        printf("*");

        printf("\n");
    }

 
    for(i=n-1; i>=1; i--)
    {
        printf("*");
        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        for(j=i-1; j>=1; j--)
        {
            printf("*");
        }
        printf("*");

        printf("\n");
    }
    printf("*");

}
