#include <stdio.h>
int main()
{
    while (1)
    {
        int current_hour, current_minute, set_hour, set_minute;
        scanf("%d %d %d %d", &current_hour, &current_minute, &set_hour, &set_minute);

        if (current_hour == 0 && current_minute == 0 && set_hour == 0 && set_minute == 0)
            break;
        
        current_hour = current_hour*60+current_minute;
        set_hour = set_hour*60+set_minute;

        if (set_hour < current_hour)
        {
            set_hour += 1440;
        }


        printf("%d\n", set_hour-current_hour);
    }
}