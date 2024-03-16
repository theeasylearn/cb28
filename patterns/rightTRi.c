//       *
//     * *
//   * * *
// * * * *

#include<stdio.h>
void main() {

    int i, j;
    int h;
    printf("Enter height : ");
    scanf("%d", &h);

    for (i = 1; i <= h; i++) {
        for (j = h; j > i; j--) {
            printf("  ");
        }
        for (j = 1; j <= i; j++) {
            printf("* ");
        }

        printf("\n");
    }

}   
