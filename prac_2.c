#include<stdio.h>
#include<math.h>
double a,b,c,r1,r2,D,x,y;

int main()
{
  printf("\nEnter the coefficients of quadratic equation\n");
  scanf("%lf%lf%lf",&a,&b,&c);
  D = (b*b)-(4*a*c);      //found discriminant
  if(D>0)
  {
    printf("The roots are real!! \n");
    r1 = (-b + sqrt(D))/2*a;
    r2 = (-b - sqrt(D))/2*a;
    printf("Root 1 = %lf and Root 2 = %lf ",r1,r2);
  }
  else if(D<0)
  {
    printf("The roots are complex!! \n");
    x = (-b)/2*a;
    y = sqrt(-D)/2*a;
    printf("Root 1 = %lf + i(%lf) \n",x,y);
    printf("Root 2 = %lf - i(%lf) ",x,y);
  }
  else
  {
    printf("The roots are equal!!\n");
    r1 = r2 = (-b)/2*a;
    printf("Root 1 = Root 2 = %lf ",r1); 
  }
  return 0;
}