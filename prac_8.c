#include <stdio.h>
int fact(int n)
{

    int i, f = 1;
    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}
int main()
{
    int n, a, z, i, g;
    float x, t, s = 0.0;
    printf("\nEnter x and n: ");
    scanf("%f%d", &x, &n);
    x = (x * 3.14 / 180.0);
    t = x;
    a = 1;
    z = 1;
    for (i = 1; i <= n; i++)
    {
        s = s + (t / fact(a)) * z;
        z = -z;
        t = t * x * x;
        a = a + 2;
    }
    printf("\nThe solution for sine series for given x and n is = %f ", s);
    return 0;
}
