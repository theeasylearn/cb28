// take age as a input and print "you can vote " if age is greater than 18, print "you cannot vote " if age is less than or equal to 18

#include<stdio.h>
void main() {
    int age ;
    printf("Enter your age : ");
    scanf("%d", &age);

    // check 

    if (age >= 18) {
        // code 
        printf("You can vote ");
    }

    if (age <= 18) {
        printf("You cannot vote ! ");
    }

    printf("bye ");
}