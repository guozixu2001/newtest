#include <stdio.h>
#include <math.h>
///another way to check prime
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    a[0] = 0;
    a[1] = 0;
    for (int i= 2; i < n; i++)
        a[i] = 1;
    for (int i = 2; i < n; i++)
    {
        if (a[i] == 1)
        {
            for (int j = 2; j <= n / i; j++)
            {
                a[i * j] = 0;
            }
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            printf("%5d", i);
            count++;
        }
        if (count % 10 == 0 && count != 0)
        {
            printf("\n");
        }
    }
}