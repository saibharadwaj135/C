#include<stdio.h>

int main()
{
    int lb,ub,i;
    printf("enter the lb value:");
    scanf("%d",&lb);
    printf("enter the ub value:");
    scanf("%d",&ub);
    for(i=lb+1;i<ub;i++)
    {
        if(i%2!=0)
        {
            printf("%d ",i);
        }
    }


}    
    
