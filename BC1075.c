#include<stdio.h>
int main()
{
    int a, i, n=0;
    scanf("%d",&a);
    for(i = 0; n < 10000; i++)
    {
        n = a*i;
        if(n<10000)
        {
            printf("%d\n",n+2);
        }
    }

    return 0;
}