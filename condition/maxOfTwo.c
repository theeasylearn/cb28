#include<stdio.h>
void main() {
    int num1, num2;

    printf("Enter number 1 : ");
    scanf("%d", &num1);

    printf("Enter number 2 : ");
    scanf("%d", &num2);

    (num1 > num2) ? printf("%d ", num1) : printf("%d ", num2);

    int maxNum;

    maxNum = (num1 > num2) ? num1 : num2;

    printf("\nMax num = %d ", maxNum);
}

// 1 > 1 false
// 5 < 2 false 
