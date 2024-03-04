// simple calculator

#include <stdio.h>
void main()
{
    int num1, num2;
    printf("Enter number 1 : ");
    scanf("%d", &num1);

    printf("Enter number 2 : ");
    scanf("%d", &num2);

    // + - * / 

    char operator;
    printf("Enter operator: ");
    fflush(stdin);
    scanf("%c", &operator);

    int subtraction;

    if (operator == '+') {
        printf("sum = %d \n", num1 + num2);
    }
    else if (operator == '-') {
        subtraction = num1 - num2;
        printf("Subtraction = %d \n", subtraction);
    }
    else if (operator == '*') {
        printf("Product = %d \n", num1 * num2);
    }
    else if (operator == '/') {
        printf("division = %.2f \n", (float)num1 / num2);
    }
}