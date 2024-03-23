#include<stdio.h>

int getFact(int num)
{
    int fact = 1;
    for (int i = num; i >= 1; i--)
    {
        fact *= i;
    }
    return fact;
}

float get_nPr (int n, int r) {

/*
    int factN = 1; // 4 bytes
    for (int i = 1; i <= n; i++) {
        factN *= i;
    }

    int factNR = 1; // 4 bytes 
    for (int i = 1; i <= (n - r); i++) {
        factNR *= i;
    } // 2n -r
*/
   
    float nPr =  getFact(n) / getFact(n - r);
    return nPr;
}

int main() {

    int n, r;
    printf("Enter value of n : ");
    scanf("%d", &n);
    printf("Enter value of r : ");
    scanf("%d", &r);

    printf("%f ", get_nPr(n, r));
}