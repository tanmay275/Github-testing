// * * * * *
// * * * *
// * * *
// * *
// *

#include <stdio.h>

int main()
{
    int n;
    printf("enter the number of rows=");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1

// #include<stdio.h>

// int main()
// {
//     int n;
//     printf("enter the number of rows=");
//     scanf("%d", &n);
//     for (int i = n; i >=1; i--)
//     {
//         for (int j = 1; j <=i; j++)
//         {
//             printf("%d", j);
//         }
//         printf("\n");

//     }

//     return 0;
// }

// 54321*
// 5432**
// 543***
// 54****
// 5*****

// #include <stdio.h>

// int main()
// {
//     int n, k;
//     printf("enter the number of rows=");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = n; j >=i; j--)
//         {
//             printf("%d", j);
//         }
//         for (k = 1; k <= i; k++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }




//          *
//        * *
//      * * *
//    * * * *
//  * * * * *


// #include <stdio.h>
// int main()
// {
//     int i, j, k;
//     for (i = 1; i <= 5; i++)
//     {
//         for (j = 5; j >= i; j--)
//         {
//             printf(" ");
//         }
//         for (k = 1; k <= i; k++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }