#include<stdio.h>

int prime(int n)


{
    int i,count=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("%d is a prime",n);
    }
    else
    {
        printf("%d is not prime",n);
    }
    
    return count;
}