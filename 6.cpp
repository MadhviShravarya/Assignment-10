#include<stdio.h>
int fact(int);
int main()
{
   int n;
   printf("enter the number to be calculate factorial\n");
   scanf("%d",&n);
   printf("factorial of %d is %d",n,fact(n));
   return 0;
}
int fact(int a)
{ 
  int f=1,i=1;
  while(i<=a)
  {
    f=f*i;
    i++;
  }
  
  return f;
}

