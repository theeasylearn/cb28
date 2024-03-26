#include<stdio.h>

void getSwap (int *n1, int *n2) {
    *n1 = *n1 + *n2;
    *n2 = *n1 - *n2;
    *n1 = *n1 - *n2;
    // int temp = *n1;
    // *n1 = *n2;
    // *n2 = temp;
}

int main() {

    int num1, num2;
    printf("Enter first number : ");
    scanf("%d", &num1);
    printf("Enter second number : ");
    scanf("%d", &num2);
    
    printf("Before call -> %d %d \n", num1, num2);
    getSwap(&num1, &num2);
    printf("After call -> %d %d \n", num1, num2);
}