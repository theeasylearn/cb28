#include <stdio.h>

int sumOfEle(int arr[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 42, 53, 3, 53};

    int size = sizeof(arr) / sizeof(arr[0]);
    // printf("%d %d ", sizeof(arr), sizeof(arr[0]));

    printf("sum = %d ", sumOfEle(arr, size));
    return 0;
}