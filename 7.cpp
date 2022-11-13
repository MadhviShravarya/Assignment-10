#include<stdio.h>
int fact(int);
int comb(int,int);
int main()
{
   int n,r;
   printf("enter the n things\n");
   scanf("%d",&n);
   printf(" enter the value of times\n");
   scanf("%d",&r);
   comb(n,r);
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
int comb(int n,int r)    
{
   int c;
   c= fact(n)/ (fact(r)*fact(n-r));
   printf("combination is %d",c);
   return c ;
}  

