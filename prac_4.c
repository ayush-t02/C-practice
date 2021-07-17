#include<stdio.h>
#include<math.h>

int main()
{
    int n,n1,sum=0,c,d,count=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    c = n;
    n1 = n;
    while(n!=0)
    {
        n = n/10;
        count = count + 1;
    }
    while(n1!=0)
    {
        d = n1%10;
        sum = sum + pow(d,count);
        n1 = n1/10;
    }
    if(sum==c)
    {
        printf("\nArmstrong number!");
    }
    else
    {
        printf("\nNot an Armstrong number!");
    }
    return 0;
}
