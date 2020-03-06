#include<stdio.h>

/*void sum(void)
{  
     int x,y;
    scanf("%d%d",&x,&y);
    printf("the sum of %d and %d with no return and arguments is %d",x,y,x+y);

}   

 void main()
 {
     sum();
 }*/

/*void sum1(int x,int y)
{
    printf("the sum of %d and %d with arguments and no return type is  %d",x,y,x+y);
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    sum1(a,b);
    printf("\n");
}*/
/*int sum2(void)
{
    int x,y;
    scanf("%d%d",&x,&y);
    return x+y;
}
int main()
{
    printf("the sum of  and num2 with returntype and no arguments is   %d",sum2());
    
}*/
int sum3(int x,int y)
{
    return x+y;
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("the sum of num1 and num with arguments and return type is %d",sum3(a,b));
}

