//  *
//  * *
//  * * *
//  * * * *
//  * * * * *_

//use incriment oparateo

// #include <stdio.h>
// int main()
// {
//     int i, j, rows;
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);
//     for (i = 1; i <= rows; ++i)
//     {
//         for (j = 1; j <= i; ++j)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

//use decriment oparatero

// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("enter the number of rows=");
//     scanf("%d", &n);
//     for (int i = n; i >= 1; i--)
//     {

//         for (int j = n; j >= i; j--)
//         {
//             printf("* ");
//         }

//         printf("\n");
//     }
//     return 0;
// }


#include <stdio.h>
int main()
{
    int i, j, rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; ++i)
    {
        for (j = 1; j <= i; ++j)
        {
            printf("%d ", i); // printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}