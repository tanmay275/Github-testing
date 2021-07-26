// A
// B C
// D E F
// G H I J
// K L M N O

// #include <stdio.h>
// int main()
// {
//     int i, j, number;
//     char ch = 'A';
//     printf("Enter The Number of Rows: ");
//     scanf("%d", &number);
//     for (i = 1; i <= number; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             printf("%c ", ch);
//             ch++;
//         }
//         printf("\n");
//     }

//     return 0;
// }

// A
// B B
// C C C
// D D D D
// E E E E E

// #include <stdio.h>
// int main()
// {
//     int i, j, input;
//     char ch = 'A';
//     printf("Enter the limit : ");
//     scanf("%d", &input);

//     for (i = 1; i <= input; ++i)
//     {
//         for (j = 1; j <= i; ++j)
//         {
//             printf("%c ", ch);
//         }
//         ++ch;

//         printf("\n");
//     }
//     return 0;
// }

// A
// AB
// ABC
// ABCD
// ABCDE

// #include <stdio.h>
// int main()
// {
//     int i, j, input;
//     printf("Enter the limit : ");
//     scanf("%d", &input);

//     for (i = 1; i <= input; ++i)
//     {
//         char ch = 'A';
//         for (j = 1; j <= i; ++j)
//         {
//             printf("%c", ch++);
//         }

//         printf("\n");
//     }
//     return 0;
// }

// *
// ++
// ,,,
// ----
// .....

// #include <stdio.h>
// int main()
// {
//     int i, j, input;
//     char ch = '*';
//     printf("Enter the limit : ");
//     scanf("%d", &input);

//     for (i = 1; i <= input; ++i)
//     {

//         for (j = 1; j <= i; ++j)
//         {
//             printf("%c", ch);
//         }
//         ch++;

//         printf("\n");
//     }
//     return 0;
// }

// A
// AA
// AAA
// AAAA
// AAAAA

#include <stdio.h>
int main()
{
    int i, j, input;
    printf("Enter the limit : ");
    scanf("%d", &input);

    for (i = 1; i <= input; ++i)
    {
        char ch = 'A';
        for (j = 1; j <= i; ++j)
        {
            printf("%c", ch);
        }
        ch++;

        printf("\n");
    }
    return 0;
}
