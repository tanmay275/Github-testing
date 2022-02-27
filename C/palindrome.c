//  Palindrome or not
#include <stdio.h>
#include <conio.h>
void main()
{
    int n,r, temp,sum = 0;
    printf("enter the number=");
    scanf("%d",&n);
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum = (sum * 10) + r;
        n = n / 10;
    }
    if (temp == sum)
    {
        printf("is palindrome number");
    }
    else
    {
        printf("is not palindrome number");
    }
}