#include<stdio.h>
int containdigit(int,int);

int main()
{
  int n,d;
  printf(" enter the number\n");
  scanf("%d",&n);
  printf(" enter the digit\n");
  scanf("%d",&d);
  printf("%d",  containdigit(n,d));
  return 0;
}
 int containdigit(int n, int d)
 {
   int r;
    while(n>0)
    {
      r=n%10;
       if(r==d)
         return 1;
       n=n/10;
    }
    return 0;
    
 }       

