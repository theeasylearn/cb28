#include <stdio.h>
int main()
{
    int car_price[] = {1, 2, 3, 4, 12, 12, 42, 2};

    // char i;
    // printf("%d ", sizeof(i));
    int size = sizeof(car_price) / sizeof(car_price[0]);
    printf("size = %d \n", size);

    for (int i = 0; i < size; i++)
    {
        printf("Enter the car price : ");

        scanf("%d", &car_price[i]);
    }

    printf("\n____________\n\n");

    for (int i = 0; i < size; i++)
    {
        printf("car price is : %d \n", car_price[i]);
    }

    return 0;
}