#include<stdio.h>

float getLargest (float num1, float num2, float num3) {

    if (num1 > num2) {
        if (num1 > num3) {
            return num1;
        }
        else {
            return num3;
        }
    }
    else {
        if (num2 > num3) {
            return num2; 
        }
        else {
            return num3;
        }
    }
}   

int main() {    
    float n1, n2, n3;
    printf("Enter n1 n2 n3 : ");
    scanf("%f %f %f", &n1, &n2, &n3);

    printf("%.2f ", getLargest(n1, n2, n3));

    return 0;
}