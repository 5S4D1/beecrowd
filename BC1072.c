#include<stdio.h>
int main()
{
    int x, count = 0;
    scanf("%d",&x);
    int n[x];
    for (int i =0; i<x; i++)
    {
        scanf("%d",&n[i]);
        if(n[i]>=10&&n[i]<=20)
        count++;
    }
    printf("%d in\n",count);
    printf("%d out\n",x-count);

    return 0;
}