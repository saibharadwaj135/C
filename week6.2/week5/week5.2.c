
#include <stdio.h>

int gcd(int m,int n)
{
    if(m==0)
    {
        return n;
    }
    else if(n==0)
    {
        return m;
    }
    else
    {
        return gcd(n,m%n);
    }


}

int main()
{  int a,b,lcm=0;
    scanf("%d%d",&a,&b);
    if(a==0||b==0)
    {
        printf("lcm is not defined");
    }
    else
    {
        
    
    
    lcm=a*b/(gcd(a,b));
    printf("The LCM of %d and %d is %d",a,b,lcm);
    }
}