#include<stdio.h>
int main()
{
    float a;
    scanf("%f",&a);
    if(a>=0&&a<=2000)
    {
        printf("Isento\n");
    }
    else if(a>2000&&a<=3000)
    {
        printf("R$ %.2f\n",(a-2000)*.08);
    }
    else if(a>3000&&a<=4500)
    {
        printf("R$ %.2f\n",1000*.08+(a-3000)*.18);
    }
    else if(a>4500)
    {
        printf("R$ %.2f\n",1000*.08+1500*.18+(a-4500)*.28);
    }

    return 0;
}