// pointers 

#include<stdio.h>
int main() {

    int num = 10;
    printf("Enter a number : ");
    scanf("%d", &num);

    printf("num = %d \n",num);

    printf("address = %p \n", &num);

    printf("address = %d \n", &num);

    // int* nump = &num; 
    int *nump = &num; 

    printf("nump = %p \n", nump);
    printf("nump = %d \n", nump);

    printf("nump value = %d \n", *nump);

    // int b = num;
    // printf("&b = %p \n", &b);


    return 0;
}
