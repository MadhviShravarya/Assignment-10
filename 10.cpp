#include<stdio.h>
 void primefactor(int);

int main()
{
  int n,p;
  printf(" enter the number\n");
  scanf("%d",&n);
  primefactor(n);
  
  return 0;
}
 void primefactor(int n)
 {
  int i;
  for(i=2;n!=1;i++)
  {
   while(n%i==0)
   {
    n=n/i;
    printf("%d ",i);
   }
  
  }
   
 }             

