// Find key

#include<stdio.h>

int checkKey(int arr[], int size, int key) {

    // int index;
    for (int i = 0; i < size; i++) {
        if (key == arr[i]) {
            // index = i; // 4 
            return i;
        }
    }
    return -1;
}

int main() {

    int arr[] = {1,2, 234 ,12, 4,3, 1 , 43 ,435, 2, 23, 23};

    int key = 43;

    int size = sizeof(arr) / sizeof(arr[0]);

    int index = checkKey(arr, size, key);
    printf("%d \n", index);

    if (index < 0) {
        printf("Key does not exist in array ");
    } else {
        printf("found key at index: %d", index);
    }

    return 0;
}
