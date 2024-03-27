#include<stdio.h>
#include<stdbool.h>

bool check;

void println() {
    // printf("%d print fun\n", check);
    if (check == true){
        printf("Leap year ");
    } else {
        printf("Normal year ");
    }
    return;
}

void checkLeapYear(int *yearp) {
    // printf("check fun\n");
    if (*yearp % 4 == 0) {
        check = true;
        // printf("true \n");
    } else {
        // printf("false \n");
        check = false;
    }
    println();
    return;
}


int main() {

    // 4, 8 ,12, 16 ,...
    // year % 4 == 0 -> leap year 

    int year;
    printf("Enter year : ");
    scanf("%d", &year);

    checkLeapYear(&year);
    return 0;
}