#include <stdio.h> 

void sort(int x[],int n)
{
    int i, j, temp;
    for (i = 1; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            if (x[j] > x[j + 1])
            {
                temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int a[100], n, i;
    printf("Enter size of array = ");
    scanf("%d", &n);

    printf("Enter the elements of array = ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    sort(a, n);
    printf("\nSorted Array: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
