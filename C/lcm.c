//  LCM of two numbers

#include <stdio.h>

int main()
{

    int a, b, lcm, low;
    printf("enter first number=");
    scanf("%d", &a);
    printf("enter second number=");
    scanf("%d", &b);
    lcm = (a > b) ? a : b;
    while (1)
    {
        if (lcm % a == 0 && lcm % b == 0)
        {
            printf("lcm of %d and %d id %d", a, b, lcm);
            break;
        }
        lcm++;
    }

    return 0;
}