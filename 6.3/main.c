//
//  main.c
//  week6.1
//
//  Created by sai bharadwaj adapa on 04/03/20.
//  Copyright © 2020 sai bharadwaj adapa. All rights reserved.
//

#include <stdio.h>

int main()
{
    int a[100],i,size;
    printf("enter the size of array:");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    
}
