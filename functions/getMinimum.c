#include<stdio.h>

int getMin(int num1, int num2, int num3) {

    if (num1 <= num2 && num1 <= num3) {
        return num1;
    }
    else if (num2 < num1 && num2 < num3) {
        return num2;
    }
    else if (num3 < num1 && num3 < num2) {
        return num3;
    }
}

int main() {

    int num1, num2, num3;
    printf("Enter number 1 : ");
    scanf("%d", &num1);
    printf("Enter number 2 : ");
    scanf("%d", &num2);
    printf("Enter number 3 : ");
    scanf("%d", &num3);

    printf("%d ", getMin(num1, num2, num3));
    return 0;
}