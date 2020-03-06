

#include <stdio.h>

int fact(int f)
{
    if(f==0)
    {
        return 1;
    }
    else
    {
        return f*fact(f-1);
    }
}

int main()
{
    int n,i,j,k,z;
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        for(j=n;j>=i;j--)
        {
            printf(" ");
        }
        for(k=0;k<=i;k++)
        {
            z=fact(i)/(fact(i-k)*fact(k));
            printf("%d ",z);
        }
        printf("\n");
    }
    
    
    
    
    
  
}
 