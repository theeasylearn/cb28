#include<stdio.h>

float getSquare(float num) {
    return num * num;
}

int main() {

    float num;
    printf("Enter a number : ");
    scanf("%f", &num);

    float sq = getSquare(num);
    printf("%.2f ", sq);

    printf("\n");

    printf("%.2f ", getSquare(num));

    return 0;
}