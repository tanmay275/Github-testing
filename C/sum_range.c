// Sum of numbers in a given range
#include <stdio.h>

int main()
{
    int n1, n2, sum = 0;
    printf("enter the first number=");
    scanf("%d", &n1);
    printf("enter the first number=");
    scanf("%d", &n2);
    for (int i = n1; i <= n2; i++)
    {
        sum += i;
    }
    printf("sum is %d", sum);

    return 0;
}