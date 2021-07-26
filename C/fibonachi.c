// #include <stdio.h>
// void main()
// {
//     int n, a = 0, b = 1, c, i;
//     printf("Enter the value of n = ");
//     scanf("%d",&n);

//     for (i = 1; i <= n; i++)
//     {
//         printf(" %d , ", a);
//         c = a + b;
//         a = b;
//         b = c;

//     }
// }

// //int diye

// #include <stdio.h>
// int titu(int n1);
// int main()
// {
//     int n, a = 0, k;
//     printf("enter the limit=");
//     scanf("%d", &n);
//     k = titu(n);
//     printf("%d", k);
//     return 0;
// }
// int titu(int n1)
// {
//     int i, c, a = 0, b = 1, n;
//     for (i = 1; i <= n; i++)
//     {
//         c = a + b;
//         a = b;
//         b = c;
//     }
//     return c;
// }

// //void diye

// #include <stdio.h>
// void titu(int n1);
// int main()
// {
//     int n;
//     printf("enter the limit=");
//     scanf("%d", &n);
//     titu(n);
//     return 0;
// }
// void titu(int n)
// {
//     int i, c, a = 0, b = 1;
//     for (i = 1; i <= n; i++)
//     {
//         printf(" %d", a);
//         c = a + b;
//         a = b;
//         b = c;
//     }
// }