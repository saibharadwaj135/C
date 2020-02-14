#include<stdio.h>
int main()
{
    int a,b,c;

    
    scanf("%d%d%d",&a,&b,&c);
    if(a<c&&b>c||a>c&&b<c)

    {
      printf("key value is between the limits");
    }         
    else
    {
        printf("key value is not in limits");
    }


    return 0;
}