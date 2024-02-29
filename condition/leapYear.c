// take year as input and print "it is a leap year "

#include<stdio.h>
void main() {
    int year;
    printf("Enter year : ");
    scanf("%d", &year);

    if (year % 4 == 0) 
        printf("It is a leap year ");
    
    if (year % 4 != 0) 
        printf("It is not a leap year");

    // if (year < 0) 
    //     printf("Invalid input ");
}   