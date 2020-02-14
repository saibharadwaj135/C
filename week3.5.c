#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
     
     if(ch>='A'&&ch<='Z')
     {
         printf("lower case is %c",ch+32);
     }
     else if(ch>='a'&&ch<='z')
     {
         printf("upper case is %c",ch-32);
     }
     else
     {
         printf("not an alphabet!!!");
     }
     return 0;
     
}