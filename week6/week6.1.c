#include<stdio.h>
int main()
{
    int a[100],size,i;

    printf("enter the size");
    scanf("%d",&size);
    printf("enter the array elements");
    for(i=0;i<size;i++)
    {scanf("%d",&a[i]);}
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    
}