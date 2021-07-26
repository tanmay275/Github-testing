#include <stdio.h>

int main()
{
    int n;
    printf("enetr the number=");
    scanf("%d", &n);
    if (n%2==0)
    {
        printf("even");
    }
    else
        printf("odd");

    return 0;
}