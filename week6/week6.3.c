
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
    printf("the smallest element is %d\n",min);
    printf("the biggest element is %d\n",max);
    
    
    return 0;
}