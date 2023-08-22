#include<stdio.h>
void main() 
{
    int t, count = 0, temp;
    scanf("%d",&t);
    for(int i = 0; i<5; i++){
        scanf("%d",&temp);
        if(temp == t) count++;
    }
    printf("%d",count);

}