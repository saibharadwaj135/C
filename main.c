//
//  main.c
//  matrices
//
//  Created by sai bharadwaj adapa on 14/03/20.
//  Copyright © 2020 sai bharadwaj adapa. All rights reserved.
//
#include<stdio.h>
int main()
{
    int a[20][20],m,n,i,j;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    for(i=0;i<m;i++)
    {     printf("\n");
        for(j=0;j<n;j++)
        {
            
            printf("%d ",a[i][j]);
            
        }
    }
    
    for(i=0;i<n;i++)
        
    {   printf("\n");
        for(j=0;j<m;j++)
        {
            printf("%d ",a[j][i]);
        }
    }

}
    

