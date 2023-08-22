#include <stdio.h>
void main()
{
    int n;
    scanf("%d", &n);
    int i, j, k;
    for (i = 1; i <= n; i++)
    {
        for (j = i; j <= i; j++)
        {
            printf("%d\t", i);
            printf("%d\t", j * i);
            printf("%d\n", j * i * i);
        }
    }
}