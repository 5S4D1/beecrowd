#include <stdio.h>
int euclides(int a, int b)
{
    int divisor, dividendo, c;
    if (a == 0)
    {
        return 0;
    }
    if (b > a)
    {
        dividendo = b;
        divisor = a;
    }
    else
    {
        dividendo = a;
        divisor = b;
    }

    while (dividendo % divisor != 0)
    {
        c = dividendo % divisor;
        dividendo = divisor;
        divisor = c;
    }
    return divisor;
}
int main()
{
    int n, N1, N2, D1, D2, num, den, nums, dens, e;
    char c1, c2, c3;
    scanf("%d", &n);

    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d %c %d %c %d %c %d", &N1, &c1, &D1, &c2, &N2, &c3, &D2);
        if (c2 == '+')
        {
            num = (N1 * D2 + N2 * D1);
            den = (D1 * D2);
        }
        else if (c2 == '-')
        {
            num = (N1 * D2 - N2 * D1);
            den = (D1 * D2);
        }
        else if (c2 == '*')
        {
            num = (N1 * N2);
            den = (D1 * D2);
        }
        else
        {
            num = N1 * D2;
            den = N2 * D1;
        }

        e = euclides(num, den);
        nums = num / e;
        dens = den / e;
        if (nums > 0 && dens > 0)
        {
            printf("%d/%d = %d/%d\n", num, den, nums, dens);
        }
        else
        {
            if (dens < 0)
            {
                dens = -dens;
                nums = -nums;
            }
            printf("%d/%d = %d/%d\n", num, den, nums, dens);
        }
    }

    return 0;
}