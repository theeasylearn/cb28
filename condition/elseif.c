// int pass
#include<stdio.h>
void main() {
    int 
    pwd;

    printf("Enter pwd: ");
    scanf("%d", &pwd);

// method 1

    if (pwd <= 999) 
    {
        printf("Weak pwd. ");
    }

    else {
        printf("Strong pwd. ");
    }

// method 2

    // if (pwd >= 1000) {
    //     printf("Strong password");
    // }

    // if (pwd < 1000) {
    //     printf("Weak password ");
    // }
}
