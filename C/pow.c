#include <math.h>
#include <stdio.h>

int main()
{
    int b, e, r;
    printf("Enter a base number: ");
    scanf("%d", &b);
    printf("Enter an exponent: ");
    scanf("%d", &e);
    r = pow(b, e);

    printf("the power of number is=%d", r);
    return 0;
}
