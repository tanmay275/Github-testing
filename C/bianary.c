#include<stdio.h>
void main()
{

    int n, d = 0, t = 1, r;
    printf("Enter a bainary no =  ");
    scanf("%d", &n);

    while (n != 0)
    {
        r = n % 10;
        d = d + r * t;
        n = n / 10;
        t = t * 2;
    }

    printf("The decimal no is = %d", d);
}

//void diye

// #include <stdio.h>
// void hp(int n);
// int main()
// {
//     int n;
//     printf("enter the number=");
//     scanf("%d", &n);
//     hp(n);
// }
// void hp(int n)
// {

//     int d = 0, t = 1, r;
//     while (n != 0)
//     {
//         r = n % 10;
//         d = d + r * t;
//         n = n / 10;
//         t = t * 2;
//     }
//     printf("The decimal no is = %d", d);
// }