// Uppercase, Lowercase 
#include <stdio.h>

int main()
{
    char c;
    printf("enter the value=");
    scanf("%c", &c);
    if (c >= 'A' && c <= 'Z')
    {
        printf("upper");
    }
    else if (c >= 'a' && c <= 'z')
    {
        printf("lower");
    }
    else
        printf("not alfabet");

    return 0;
}