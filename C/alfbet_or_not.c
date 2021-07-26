// A character is an alphabet or not
#include <stdio.h>
int main()
{
    char ch;
    printf("enter the alphabet=");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z')
    {
        printf("%c is an alphabet", ch);
    }
    else
    {
        printf("%c is not alphabet", ch);
    }
}