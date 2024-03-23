#include<stdio.h>

int getPower(int base, int expo) {
    
/*
    base = 2, expo = 2
    2 * 2 

    base = 3, expo = 5
    3 * 3 * 3 * 3 * 3

    base = 7 expo = 10
    7 * 7 * 7 * 7 * 7 * 7 * 7 * 7 * 7 * 7
*/
    int power = 1;
    if (base == 0 && expo != 0) {
        return 0;
    }
    else if (expo == 0 && base != 0) {
        return 1;
    }
    else if (base == 0 && expo == 0) {
        printf("Invalid input ");
        return -1;
    }
    else {
        for (int i = 1; i <=  expo; i++) {
            power = power * base; // power = 7 // power = 7 * 7 // power =  7 * 7 * 7 // power = (7 * 7 * 7) * 7
        }
    }
    return power;
}

int main() {
    int base, expo;
    printf("Enter base : ");
    scanf("%d", &base);
    printf("Enter expo : ");
    scanf("%d", &expo);


    printf("%d ^ %d = %d ", base, expo, getPower(base, expo));
    // 2 * 2 * 2 * 2 * 2
    return 0;
}