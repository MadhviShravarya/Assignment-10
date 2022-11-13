#include<stdio.h>
float simpleInt(float,float,float);
int main()
{
  
  float r,t,p, SI;
  printf("enter the rate percent\n");
  scanf("%f",&r);
  printf(" enter the time \n");
  scanf("%f",&t);
  printf(" enter the principal value\n");
  scanf("%f",&p);
  SI= simpleInt(r,t,p);
  printf(" simple interest = %f",SI);
   return 0;
}
float simpleInt(float x,float y , float z)
{
   float si;
   si= (x*y*z)/100.0;
  return si ;
}
     

