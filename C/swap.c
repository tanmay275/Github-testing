// Swap two numbers without third variable



// #include<stdio.h>

// int main()
// {
//     int a,b;
//     printf("emter the value of a");
//     scanf("%d", &a);
//     printf("emter the value of b");
//     scanf("%d", &b);
//     int temp=a;
//     a=b;
//     b=temp;
//     printf("after swaping :  a=%d, b=%d",a,b);
    
//     return 0;
// }

#include<stdio.h>

int main()
{
    int a,b;
    printf("enetr two number=");
    scanf("%d %d", &a, &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swaping : a=%d, b=%d",a,b);
    return 0;
}