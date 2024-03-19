//       *
//     * *
//   * * *
// * * * *

#include<stdio.h>
void main() {

    int i, j;
    int h;
    // printf("Enter height : ");
    // scanf("%d", &h);

    for (i = 1; i <= 6; i++) {
        for (j = 6; j > i; j--) {
            printf("+ ");
        }
        for (j = 1; j <= i; j++) {
            printf("* ");
        }

        printf("\n");
    }
    

}   
