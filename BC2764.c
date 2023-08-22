#include<stdio.h>
int main()
{
    int x, y, z;
    scanf("%d/%d/%d",&x,&y,&z);
    printf("%.2d/%.2d/%.2d\n",y,x,z);
    printf("%.2d/%.2d/%.2d\n",z,y,x);
    printf("%.2d-%.2d-%.2d\n",x,y,z);
    return 0;
}