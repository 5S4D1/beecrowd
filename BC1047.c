#include <stdio.h>
int main()
{
    int start_hour, start_minut, end_hour, end_minut;
    int dif;
    scanf("%d %d %d %d", &start_hour, &end_hour, &start_minut, &end_minut);

    dif = ((start_minut * 60) + end_minut) - ((start_hour * 60) + end_hour);
    if (dif <= 0)
        dif += 24 * 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", dif / 60, dif % 60);

    return 0;
}