// A character is a vowel or consonant
#include <stdio.h>
int main()
{
    char ch;
    printf("enter the  word=\n");
    scanf("%c", &ch);
    if (ch == 'a' ||ch == 'e'|| ch == 'i'|| ch == '0'|| ch == 'u')
    {
        printf("%c is vowel",ch);
    }
    else
    {
        printf("%c is consonanat",ch);
    }
}
