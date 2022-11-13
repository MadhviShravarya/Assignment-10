#include<stdio.h>
int evenodd(int);
int main()
{
   int n,s;
   printf("enter the number ");
   scanf("%d",&n);
   s=evenodd(n);
   return s;
}
int evenodd(int a)
{
   if(a%2==0) 
     {
     
     return 1;
     }
   else 
     {
     
     return 0;
     }
}

