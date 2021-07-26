//Armstrong number or not

#include <stdio.h>

int main()
{
    int n, r, a, sum = 0, temp;
    printf("enter the number=");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        a = r * r * r;
        sum = sum + a;
        n = n / 10;
    }
    if (temp == sum)
    {
        printf("Amstrong number");
    }
    else
    {
        printf("not an amstrong number");
    }

    return 0;
}