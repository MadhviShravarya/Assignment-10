#include<stdio.h>
int fact(int);
int per(int,int);
int main()
{
   int n,r;
   printf("enter the n things\n");
   scanf("%d",&n);
   printf(" enter the value of times\n");
   scanf("%d",&r);
   per(n,r);
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
int per(int n,int r)    
{
   int p;
   p= fact(n)/ fact(n-r);
   printf("permutation is %d",p);
   return p ;
}  

