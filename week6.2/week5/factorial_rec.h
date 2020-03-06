#include<stdio.h>
int factorial_rec(int n)
{ 
   if(n==0)
   return 1;
   else 
   return n*factorial_rec(n-1);
}