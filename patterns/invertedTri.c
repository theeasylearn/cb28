// * * * *
// * * *
// * *
// *

#include <stdio.h>
void main()
{

/*
    printf("* ");
    printf("* ");
    printf("* ");
    printf("* ");
    printf("\n");

    printf("* ");
    printf("* ");
    printf("* ");
    printf("\n");

    printf("* ");
    printf("* ");
    printf("\n");

    printf("* ");
    printf("\n");

    printf("\n");
    printf("\n");
    printf("\n");
*/    int i, j;
    int h = 4;
    printf("Enter height : ");
    scanf("%d", &h);

    for (i = 1; i <= h; i++)
    {
        for (j = h; j >= i; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
        printf("\n");
        printf("\n");
        printf("\n");


    for (i = 1; i <= h; i++)
    {
        for (j = h; j >= i; j--)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
        printf("\n");
        printf("\n");
        printf("\n");

    for (i = 1; i <= h; i++)
    {
        printf("%d \t", i);
        for (j = h; j >= i; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }


}