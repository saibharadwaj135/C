#include<stdio.h>
int main()
{

    int a,b;
    char operator;

    scanf("%d%d",&a,&b);
    fflush(stdin);
    scanf("%c",&operator);

    switch(operator)
    {
        case '+':
                   printf("sum of %d and %d is %d",a,b,a+b);
                   break;
        case '-':
                   printf("difference of %d and %d is %d",a,b,a-b); 
                   break;
        case '*':
                  printf("product of %d and %d is %d",a,b,a*b);
                  break;
        case '/':
                printf("division of %d and %d is %d",a,b,a/b);
                break;
        case '%':
                printf("modulo of %d and %d is %d",a,b,a%b);
                break;
        default:
                printf("enter correct operator");                                           
    }
    return 0;
}    