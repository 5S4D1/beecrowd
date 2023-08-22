#include <stdio.h>
int main()
{
    double n, r;
    n = 3.14159;
    scanf("%lf", &r);
    printf("A=%.4lf\n", n * r * r);
    return 0;
}