#include<stdio.h>
#include "factorial.h"
#include "factorial_rec.h"
#include "prime.h"
int main()
{
    int n;
    scanf("%d",&n);
    printf("the factorial of %d is %d\n",n,factorial(n));
    printf("the factorial of %d with recursion %d\n",n,factorial_rec(n));
    prime(n);
    printf("\n");
    
}