#include<stdio.h>

int gcd(int m,int n)
{
    if(n>m)
    {
        return gcd(n,m);
    }
    else if(n==0)
    {
        return m;
    }
    else
    {
        return gcd(n,m%n);
    }
}

int main()
{
    int a,b,g;
    printf("\nEnter the two numbers = ");
    scanf("%d%d",&a,&b);
    g = gcd(a,b);
    printf("GCD = %d\n",g);
    return 0;
}