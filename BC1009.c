#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[20];
    double b, c, d, e;
    scanf("%s", &a);
    scanf("%lf %lf",&b, &c);
    d = ((c * 15) / 100);
    e = d + b;
    printf("TOTAL = R$ %.2lf\n", e);
    return 0;
}