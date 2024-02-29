// positive negative

#include <stdio.h>
void main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    if (num > 0) {
        printf("It is a positive number ");
    }

    if (num < 0)
        printf("It is a negative number ");

    if (num == 0) printf("zero is neither positive nor negative ");

}