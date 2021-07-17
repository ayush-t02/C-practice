#include<stdio.h>
#include<math.h>
double p,r,t,s,c;

int main()
{
  printf("\nEnter the Principal amount,Rate percent,Time\n");
  scanf("%lf%lf%lf",&p,&r,&t);
  s = (p*r*t)/100;
  printf("\nThe Simple Interest = %lf",s);
  c = p*pow((1+r/100),t)-p;
  printf("\nThe Compound Interest is = %lf",c);
  return 0;
}