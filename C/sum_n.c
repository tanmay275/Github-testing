// Sum of N natural numbers

#include<stdio.h>

int main()
{
    int n,sum=0;
    printf("enter the number=");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        sum=sum+i; //sum+=i
    }
    printf("sum is =%d", sum);
    
    return 0;
}