// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int n,i,ch;
//     printf("enter the number1=");
//     scanf("%d", &n);
//     printf("enter the number2=");
//     scanf("%d", &i);
//     printf("Select operation");
//       printf(" Addition = a  ");
//       printf(" Subtraction = s ");
//       printf(" Multiplication = m  ");
//       printf(" Division = d ");
//       printf(" Whice operation you want to do? = ");
//       scanf("%c", ch);
//       switch(ch) {
//          case 'a' :
//          printf(" Sum of the given two numbers: = "+(a+b));
//          break;
//          case 's' :
//          printf(" Difference between the two numbers: = "+(a-b));
//          break;
//          case 'm' :
//          printf(" Product of the two numbers: = "+(a*b));
//          break;
//          case 'd' :
//          printf(" Result of the division: = "+(a/b));
//          break;
//          default :
//          printf("Invalid grade");
//       }

      
//       }
#include<stdio.h> // include stdio.h library

int main(void)
{       
    int a, b, result;
    char op; // to store the operator
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    
    printf("Enter an expression: ");
    scanf("%d%c%d", &a, &op, &b);

    switch(op)
    {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;              
    }
    
    printf("Result = %d", result);
    
    return 0; // return 0 to operating system
}
