//
//  main.c
//  week6.4
//
//  Created by sai bharadwaj adapa on 06/03/20.
//  Copyright © 2020 sai bharadwaj adapa. All rights reserved.
//
#include<stdio.h>
int main()
{
    int a[100],i,size,n,exist=0;
    printf("enter the size of array");
    scanf("%d",&size);
    printf("enter the array elements");
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);
    printf("enter the n value");
    scanf("%d",&n);
    for(i=0;i<size;i++)
    {if(n==a[i])
    {
        exist=1;
        printf("%d\n",i+1);
        
    }
        
    }
    if(exist==1)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
    
}
