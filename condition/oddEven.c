// 2, 4 ,6 ,8 10, 12 ... 

#include<stdio.h>
void main() {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    // check 
    // int modulo = num % 2;

    if (num % 2 == 0) {
        printf("Even number ");
    }

    if (num % 2 != 0) {
        printf("Odd number ");
    }
}