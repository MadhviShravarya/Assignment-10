#include<stdio.h>
void printN(int);
int main()
{
   int n,i;
   printf("enter the nth term ");
   scanf("%d",&n);
   printN(n);
   return 0;
}
void printN(int a)
{
  int i;
   for(i=1;i<=a;i++)
   {
     printf("%d",2*i-1);
     printf("\n");
   }
}

