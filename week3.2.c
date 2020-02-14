#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);

    if(ch>=65&&ch<=90||ch>=97&&ch<=122)
    {
       if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
       {
           printf("%c is a vowel\n",ch);
  
       }
       else
       {
           
        printf("%c is a consonant\n",ch);
           
       }
       
    }
    else if(ch>=48&&ch<=57)
    {
       printf("it is a digit\n");
    }
    else
    {
        
       printf("it is a special character");
        
    }
    
 return 0;
}