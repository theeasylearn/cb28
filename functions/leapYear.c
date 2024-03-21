#include<stdio.h>
#include<stdbool.h>

bool checkLeapYear(int year) {

    if (year % 4 == 0) {
        return true;
    }
    return false;
}

int main() {    
  
    int year;
    printf("Enter year : ");
    scanf("%d", &year);

    printf("%d ", checkLeapYear(year));
    return 0;
}