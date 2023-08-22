#include <stdio.h>
int main()
{
    int a, i;
    scanf("%d", &a);
    int m[a];
    for(i = 0; i < a; i++)
    {
        scanf("%d",&m[i]);
    }
    for (i = 0; i < a; i++)
    {
        if(m[i]==0) printf("Fib(0) = 0\n");
        if (m[i]==1) printf("Fib(1) = 1\n");
        if(m[i]>1)
        {
            int t = m[i];
            long long int b =0, c=1, sum = 0;
            for(int j = 0;j<t;j++)
            {
                b = c;
                c = sum;
                sum = b + c;
            }
            printf("Fib(%d) = %lld\n", m[i], sum);
        }
    }
    return 0;
}