#include<stdio.h>
int main()
{
    int marks[5];
    for(int i=0;i<5;i++)
    {
        printf("enter the number=",i+1);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i <5; i++)
    {
        printf("print the value==%d \n",marks[i]);
    }
    

}