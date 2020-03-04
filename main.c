//
//  main.c
//  practice
//
//  Created by sai bharadwaj adapa on 04/03/20.
//  Copyright © 2020 sai bharadwaj adapa. All rights reserved.


#include <stdio.h>

int main()
{
    int a[100],i,n,min=0,max=0;
    printf("enter the size of array");
    
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
        
    }
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("the minimum value is %d\n",min);
    printf("the maximum value is %d\n",max);
    
    
    return 0;
}
