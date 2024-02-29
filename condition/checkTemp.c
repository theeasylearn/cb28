#include<stdio.h>
void main() {
    float temp;
    printf("Enter temperature: ");
    scanf("%f", &temp);

    if (temp > 20) {
        printf("it is a hot day");
    }    
    
    if (temp <= 20) {
        printf("It is a cold day");
    }
}