#include <stdio.h>
int main()
{
    int a, b, c, d;
    double e, f, g = 0;
    scanf("%d %d %lf", &a, &b, &e);
    scanf("%d %d %lf", &c, &d, &f);
    g = b * e;
    g += d * f;
    printf("VALOR A PAGAR: R$ %.2lf\n", g);
    return 0;
}