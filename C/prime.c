// Prime number or not

#include <stdio.h>

int main()
{
    int n, count = 0;
    printf("enter the number=");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        printf(" is prime number");
    }
    else
    {
        printf(" is not prime number");
    }

    return 0;
}