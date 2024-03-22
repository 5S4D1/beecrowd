#include <stdio.h>
#include <string.h>
void main()
{
    int n, dwarves, elves, humans, magicians, hobbits;
    dwarves = elves = humans = magicians = hobbits = 0;
    scanf("%d", &n);
    char fellowship[15];
    for (int i=0; i < n; i++)
    {
        gets(fellowship);
        int len = strlen(fellowship);
        //printf("%d",len);
        if (fellowship[len-1]=='A')    dwarves++;
        else if (fellowship[len-1]=='E')  elves++;
        else if (fellowship[len-1]=='H')  humans++;
        else if (fellowship[len-1]=='M')   magicians++;
        else  hobbits++;
    }
    printf("%d Hobbit(s)\n",hobbits);
    printf("%d Humano(s)\n",humans);
    printf("%d Elfo(s)\n",elves);
    printf("%d Anao(oes)\n",dwarves);
    printf("%d Mago(s)\n",magicians);
}