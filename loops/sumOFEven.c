#include<stdio.h>
void main() {

    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    int sum = 0;

    for (int i = 0; i <= num; i++) {
        if (i % 2 != 0) {
            continue;
        }
        sum += i;
    }
    printf("sum = %d ", sum);
}