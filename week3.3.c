#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,r1,r2;
    
    scanf("%f",&a);
  
    scanf("%f",&b);
    
    scanf("%f",&c);
     
     d=(b*b)-4*a*c;

    if(d>0)
    {
        
        r1=(-b+sqrt(d))/2*a;
        r2=(-b-sqrt(d))/2*a;
        printf("nature of roots is real and unequal\n");
        printf("root1= %.2f root2= %.2f\n",r1,r2);
    } 
    else if(d==0)
    {
        r1=(-b+sqrt(d))/2*a;
        printf("nature of roots are real and equal\n");
        printf("root1=%.2f root2=%.2f\n",r1,r1);
    }
    else
    {
        r1=(-b)/2*a;
        printf("nature of roots are unequal and real\n");
        printf("root1=%.2f+%.2fi root2=%.2f-.%.2fi\n",r1,sqrt(-d)/2*a,r1,sqrt(-d)/2*a);
    }
    return 0;
    
    
}