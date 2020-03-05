//
//  main.c
//  lcm using gcd recursion
//
//  Created by sai bharadwaj adapa on 05/03/20.
//  Copyright © 2020 sai bharadwaj adapa. All rights reserved.
//

#include <stdio.h>

int gcd(int m,int n)
{
    if(m==0)
    {
        return n;
    }
    else if(n==0)
    {
        return m;
    }
    else
    {
        return gcd(n,m%n);
    }
}

int main()
{  int a,b,lcm=0;
    scanf("%d%d",&a,&b);
    
    lcm=a*b/(gcd(a,b));
    printf("The LCM of %d and %d is %d",a,b,lcm);
    
}
