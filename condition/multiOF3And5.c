// multiple of 5 or 3 -> "multiple of 5" : "multiple of 3"

#include<stdio.h>
void main() {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    // check 
    if (num % 3 == 0) {
        if (num % 5 == 0) {
            printf("Number is multiple of 3 and 5 ");
        }
        else {
            printf("Number is multiple of 3 ");
        }
    }
    else {
        if (num % 5 == 0) {
            printf("Number is multiple of 5 only ");
        }
        else {
            printf("Number is not multiple of 3 and 5 both ");
        }
    }
}


