#include<stdio.h>

float add;
float *addp = &add;

void sum (float n1, float n2) {
    *addp = n1 + n2;
    // printf("sum = %.f \n", add);
    
    return;
    
    printf("this is hadi here ");
}

int main() {

    float num1, num2;
    printf("Enter first number : ");
    scanf("%f", &num1);
    
    printf("Enter second number : ");
    scanf("%f", &num2);

    sum (num1, num2);

    printf("%.2f ", *addp);

    return 0;
}