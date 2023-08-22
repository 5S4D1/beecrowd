#include <stdio.h>
int main()
{
    int n, a[1000];
    scanf("%d", &n);
    for (int i = 0; i < 1000; i = i + n)
    {
        for (int j = 0; j < n; j++)
        {
            a[i + j] = j;
        }
    }
    for (int i = 0; i < 1000; i++)
    {
        printf("N[%d] = %d\n", i, a[i]);
    }
    return 0;
}