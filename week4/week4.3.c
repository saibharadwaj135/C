#include<stdio.h>
#include<math.h>

int main()
{
    int n,p,t,rem=0,num=0;
    printf("enter the n value");
    scanf("%d",&n);
    printf("enter to which number you want to raise");
    scanf("%d",&p);
    t=n;
    
    while(n!=0)
    {
        rem=n%10;
        num=num+pow(rem,p);
        n=n/10;
    }
    printf("sum of individual digits raised to power of %d is %d\n",p,num);

    if(num==t)
    {
        printf("%d is an armstrong number\n",t);
    }
   else
   {
       printf("%d is not a armstrong number",t);
   }
   
   
    return 0;
} 
