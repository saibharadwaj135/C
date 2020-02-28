#include<stdio.h>

int main()
{
    int n,i,count=0;
    printf("enter the n value");
    scanf("%d",&n);
    if(n<0)
    {
        printf("invalid input number");
    }
    else
    {
    
    printf("factors are");
    for(i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            count=count+1;
            printf("%d\n",i);
        }
    
    }
    if(count==2)
    {
        printf("%d is  a prime number\n",n);
    }
    else
    {
        printf("%d is not a prime\n",n);
    } 
    }   
    return 0;
} 
