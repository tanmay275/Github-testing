// 1
// 2 3
// 4 5 6
// 7 8 9 10

#include <stdio.h>

int main()
{
    int n, num = 1;
    printf("enter the number=");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}