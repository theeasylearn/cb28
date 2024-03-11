// 4, 7, 10, ...

#include <stdio.h>
void main()
{

    int i;
    int num;
    int ans = 0;

    printf("Enter a number : ");
    scanf("%d", &num);

    // for (i = 1; i <= num; i++) {
    // ans = ans + 3;
    // i = ans + 3;
    //     printf("%d ", ans);
    // }

    ans = 4;
    // printf("%d ", ans);

    // ans += 3;
    // printf("%d ", ans);

    // ans += 3;
    // printf("%d ", ans);

    // ans += 3;
    // printf("%d ", ans);

    // ans += 3;
    // printf("%d ", ans);

    for (i = 1; i <= num; i++)
    {
        printf("%d ", ans);
        ans += 3;
    }
}