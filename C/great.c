// Greatest of two numbers

#include <stdio.h>

int main()
{
    int a, b;
    printf("enter the first number=");
    scanf("%d", &a);
    printf("enter the first number=");
    scanf("%d", &b);
    if (a > b) //smallest number (a<b)
    {
        printf("the lergest number is %d", a);
    }
    else
    {
        printf("the lergest number is %d", b);
    }

    return 0;
}