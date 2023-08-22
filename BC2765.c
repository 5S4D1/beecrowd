#include <stdio.h>
#include <string.h>
int main()
{
    char s[190];
    gets(s);
    int a = strlen(s);
    for(int i = 0; i<a; i++)
    {
        if(s[i]==',')
        {
            s[i] = '\n';
        }
        printf("%c",s[i]);
    }
    printf("\n");
    
    return 0;
}