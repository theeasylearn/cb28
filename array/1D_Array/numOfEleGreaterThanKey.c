// Number of elements greater than key
// {1, 2, 3, 4, 5}; 
// key = 3

#include<stdio.h>

int numOfEle(int arr[], int size, int key) {

    int count = 0;
    // if (key < 0) {
    //     printf("Invalid input ");
    //     return 0;
    // }
    for (int i = 0; i < size; i++) {
        
        if (arr[i] > key) {
            count++; // 1 // 2 // 3 ...
        } 
    }
    return count;
}

int main() {

    int arr[] = {1, 2, 3, 4, -5,12, -43, 12, 5,3};
    int size = sizeof(arr) / sizeof(arr[0]);

    int key = -1;
    printf("%d ", numOfEle(arr, size, key));

    return 0;
}
