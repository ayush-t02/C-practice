#include<stdio.h>

int main()
{
    double a,b,c;
    printf("Enter the 3 sides of triangle = ");
    scanf("%lf %lf %lf",&a,&b,&c);
    if((a+b)>c&&(b+c)>a&&(a+c)>b)
    {
        printf("\nTriangle is constructible!");
        if((a==b)&&(a==c))
        {
           printf("\nEquilateral triangle!"); 
        }
        else if((a!=b)&&(b!=c)&&(a!=c))
        {
           printf("\nScalene triangle!");
        }
        else 
        {
           printf("\nIsosceles triangle!");
        }
    }
    else
    {
       printf("\nTriangle cannot be formed!"); 
    }
    return 0;
}
