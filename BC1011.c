#include <stdio.h>
#include <math.h>
int main()
{
    double pi, r, t;
    pi = 3.14159;
    scanf("%lf", &r);
    t = (4.0 / 3) * pi * pow(r, 3);
    printf("VOLUME = %.3lf\n", t);
    return 0;
}