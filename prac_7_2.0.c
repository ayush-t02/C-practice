#include <stdio.h>
int main()
{
    int n,i,j,s,a;
    printf("\nEnter no. of lines = ");
    scanf("%d", &n);
    for (i=1;i<=n;i++)
    {
        a=1;
        s = n - i;
        for (j=1;j<=s;j++)
        {
            printf(" ");
        }
        for (j=1;j<=i;j++)
        {
            printf("%d",a);
            a++;
        }
        a--;
        for (j=1;j<i;j++)
        {
            a--;
            printf("%d",a);
        }
        printf("\n");
    }
    return 0;
}