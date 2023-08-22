#include<stdio.h>
int main()
{
    int a;
    int pos, even, odd, neg;
    pos = even = odd = neg = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&a);
        if(a>0){
            pos++;
        }
        if(a<0){
            neg++;
        }
        if(a%2 == 0)
        {
            even++;
        }
        if(a%2 != 0)
        {
            odd++;
        }
    }
    printf("%d valor(es) par(es)\n",even);
    printf("%d valor(es) impar(es)\n",odd);
    printf("%d valor(es) positivo(s)\n",pos);
    printf("%d valor(es) negativo(s)\n",neg);

    return 0;
}