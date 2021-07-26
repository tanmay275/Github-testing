// Greatest of three numbers

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("enetr the value of three number=");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("the largest number is %d", a);
    }
    else if (b > a && b > c)
    {
        printf("the largest number is %d", b);
    }
    else
    {
        printf("the largest number is %d", c);
    }

    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int a, b, c;
//     printf("Enter three numbers : ");
//     scanf("%d %d %d", &a, &b, &c);
//     if (a > b && a > c)
//         printf("\nThe largest among the three numbers is %d", a);
//     else if (b > a && b > c)
//         printf("\nThe largest among the three numbers is %d", b);
//     else
//         printf("\nThe largest among the three numbers is %d", c);
//     return 0;
// }