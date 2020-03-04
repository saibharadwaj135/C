//
//  main.c
//  week6.2
//
//  Created by sai bharadwaj adapa on 04/03/20.
//  Copyright © 2020 sai bharadwaj adapa. All rights reserved.
//

#include <stdio.h>

int main()
{
    int a[100],i,size,positive=0,negative=0,odd=0,even=0,sum=0;
    printf("enter the array size:");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++)
    {
        if(a[i]<0)
        {
            negative++;
        }
        else
        {
            positive++;
        }
    }
        for(i=0;i<size;i++)
        { if(a[i]%2==0)
         {
            even++;
         }
            else
            {
                odd++;
            }
        }
    for(i=0;i<size;i++)
    {
        sum=sum+a[i];
    }
        printf("the positive numbers are %d\n",positive);
        printf("the negtive numbers are %d\n",negative);
        printf("the odd numbers are %d\n",odd);
        printf("the even numbers are %d\n",even);
       printf("the sum is %d",sum);
    
}
