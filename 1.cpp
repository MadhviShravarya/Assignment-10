#include<stdio.h>
float circleArea(int);
int main()
{
  int r;
  float a;
  printf("enter the radius of a circle\n");
  scanf("%d",&r);
  a=circleArea(r);
  printf(" area of a circle is %f",a);
   return 0;
}
float circleArea(int x)
{
  return 3.14*x*x;
}

