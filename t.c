#include <stdio.h>
int main ()
{
    int car_price [10];

    for (int i = 0; i < 10; i++)
    {
        printf("Enter the car price : ");
        
        scanf("%d", &car_price[i]);
    }

    printf("\n____________\n\n");

    for (int i = 0; i < 10; i++)
    {
        printf("car price is : %d \n", car_price[i]);
    }

    return 0;
}