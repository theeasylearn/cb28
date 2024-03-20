#include<stdio.h>

float sum (float n1, float n2) {
    float add = n1 + n2;
    // printf("sum = %.f \n", add);
    
    return add;

    printf("this is hadi here ");
}

int main() {

    float num1, num2;
    printf("Enter first number : ");
    scanf("%f", &num1);
    
    printf("Enter second number : ");
    scanf("%f", &num2);

    float ans = sum (num1, num2);

    printf("%.2f ", sum (num1, num2));

    return 0;
}