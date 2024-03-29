#include<stdio.h>

void printEle(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return;
    
    printf("asdf ");
}
int main() {

    int arr[] = {1, 2, 3, 4, 5, 42, 53, 3, 53};
    int size = sizeof(arr) / sizeof(arr[0]);

    printEle(arr, size);    
    
    int arr2[] = {1, 242, 53, 3, 53};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    printEle(arr2, size2);
    return 0;
}