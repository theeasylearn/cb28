#include<stdio.h>
int printall(int ar[3][3], int size) {

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", ar[i][j]);
        }
        printf("\n");
    }

return 0;
}
int main() 
{

    int ar[][3] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(ar) / 4;
    printf("%d \n", size);
    printall(ar, size);
    
    return 0;
}