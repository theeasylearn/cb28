// check eligibility of candidate for a job based on their experience 

#include<stdio.h>
void main() {

    int exp;
    printf("Enter your experience : ");
    scanf("%d", &exp);

    if (exp <= 5) 
        printf("You are not eligible ");
    else 
        printf("You are eligible for job ");
}