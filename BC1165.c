#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);

        if (num == 2)
            printf("%d eh primo\n", num);

        for (int j = 2; j < num; j++)
        {
            if (num % j == 0)
            {
                printf("%d nao eh primo\n", num);
                break;
            }
            if (j == num - 1)
                printf("%d eh primo\n", num);
        }
    }

    return 0;
}