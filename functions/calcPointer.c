#include<stdio.h>

// continue 

void printSub(int num1, int num2) {
    printf("sub = %d", num1 - num2);
}
void printSum(int num1, int num2) {
    printf("sum = %d", num1 + num2);
}

void calc(int *n1, int *n2, char *op) {
    if (*op == '+') {
        // printf("sum = %d ", *n1 + *n2);
        printSum(*n1, *n2);
    }
    else if (*op == '-') {
        printSub(*n1, *n2);
    }
}

int main() {

    int num1, num2;
    char operator;

    printf("Enter first number : ");
    scanf("%d", &num1);
    printf("Enter second number : ");
    scanf("%d", &num2);

    printf("Enter operator: ");
    fflush(stdin);
    scanf("%c", &operator);

    calc(&num1, &num2, &operator);
    return 0;
}