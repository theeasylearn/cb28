// create a functions which return add, subtract, product and division, min, max, modulo, remainder, ascii values of two numbers 
 
#include <stdio.h>

char getAscii(int num) {
    return (char) num;
}

int getRemainder(int num1, int num2) {
    return num1 % num2;
}

int getMin(int num1, int num2) {
    return (num1 < num2) ? num1 : num2;
}
int getMax(int num1, int num2) {
    return (num1 > num2) ? num1 : num2;
}

float getDivision (int num1, int num2) {
    return (float)num1 / num2;
}
int getProd(int num1, int num2) {
    return num1 * num2;
}
int getSub(int num1, int num2) {
    return num1 - num2;
}
int getSum(int num1, int num2) {
    return num1 + num2;
}
int main()
{

    int num1, num2;
    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);

    char operator;
    printf("Enter operator: ");
    fflush(stdin);
    scanf("%c", &operator);

    printf("sum = %d \n", getSum(num1, num2));
    printf("sub = %d \n", getSub(num1, num2));
    printf("product = %d \n", getProd(num1, num2));
    printf("division = %.2f \n", getDivision(num1, num2));
    printf("max = %d \n", getMax(num1, num2));
    printf("min = %d \n", getMin(num1, num2));
    printf("remainder = %d \n", getRemainder(num1, num2));
    printf("char = %c \n", getAscii(num1));

    return 0;
}