#include <stdio.h>
void main()
{
    double a, sum = 0;
    int  count = 0;
    for (int i = 0; i < 6; i++)
    {
        scanf("%lf", &a);
        if (a > 0)
        {
            sum += a;
            count++;
        }
    }
    double avg = sum / count;
    printf("%d valores positivos\n", count);
    printf("%.1lf\n", avg);
}