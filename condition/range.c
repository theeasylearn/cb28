#include<stdio.h>

#include<stdbool.h>
void main() {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);


    if (num < 0) {
        printf("Invalid number | number is less than 0 ");
    }
    else if (num >= 0 && num <= 10) {
        printf("0 - 10");
    }
    else if (num >= 10 && num <= 20) {
        printf("10 - 20");
    }
    else {
        printf("greater than 20 ");
    }
}