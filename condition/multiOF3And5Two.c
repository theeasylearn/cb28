#include <stdio.h>
void main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 5 == 0)
    {
        printf("Number is multiple of 3 and 5 ");
    }
    else if (num % 3 == 0 )
    {
        printf("Number is multiple of 3 ");
    }
    else if (num % 5 == 0)
    {
        printf("Number is multiple of 5 ");
    }
    else
    {
        printf("Number is not multiple of 3 and 5 both ");
    }

}