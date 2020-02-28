#include<stdio.h>

int main()
{
    int i,ub,n,l;

    scanf("%d%d",&ub,&n);
    printf("usage of break statement\n");
    for(i=0;i<ub;i++)
    {   
        if(i==n) break;
     
        printf("%d ",i);  
    }
    printf("\n");
     printf("usage of continue statement:\n");
    for(i=0;i<ub;i++)
    {
        if(i==n)
        {
            continue;
        }
        
        printf("%d ",i);
    } printf("\n");
    printf("usage of go to statement\n");
    for(i=0;i<ub;i++)
    {
        if(i==n)
        {
            goto l;
        }
        
        printf("%d ",i);
    }
   l: printf("loop break");


}