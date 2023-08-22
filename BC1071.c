#include<stdio.h>
int main()
{
    int a, b, sum=0;
    scanf("%d %d",&a,&b);
    if(a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    if(a%2 == 0)
    {
        for(int i = a+1; i < b; i=i+2)
        {
            sum += i;
        }
    }
    else
    {
        for(int i = a+2; i < b; i=i+2)
        {
            sum += i;
        }
    }

    printf("%d\n",sum);
    return 0;
}