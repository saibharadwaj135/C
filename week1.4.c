Compiler/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{  float cel,far;
   printf("enter the temperature in celcius:");
    scanf("%f",&cel);
   
   far=(cel*9/5)+32;
   printf("the temperature in farenheit:%f",far);
   
   printf("enter the temperature in farenheit:");
   scanf("%f",&far);
   
   cel=((far-32)*5/9);
   
   printf("the temperature in celsius:%f",cel);
   

    return 0;
}
