#include <stdio.h>
void main()
{
    int n, num[10];
    printf("enter the array=");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
    }
    printf("the array you have enter=");
    for (int i = 0; i < 5; i++)
    {
        printf("%d \n", num[i]);
    }
}