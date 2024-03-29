// Swap using array 
#include<stdio.h>

void printEle(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return;\
    
    printf("asdf ");
}

void swap(int arr[]) {
/*
    int temp = n2;
    n2 = n1;
    n1 = temp;
    
    n1 = n1 + n2;
    n2 = n1 - n2;
    n1 = n1 - n2;
    */

   int temp = arr[0];
   arr[0] = arr[1];
   arr[1] = temp;
}

int main() {

    int num[] = {1, 2};

    int size = sizeof(num) / sizeof(num[0]);

    printEle(num, size);
    swap(num);
    printEle(num, size);

    return 0;
}