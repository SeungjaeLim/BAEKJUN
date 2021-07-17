#include<stdio.h>
int main()
{
    int hour, minute;
    scanf("%d %d",&hour, &minute);
    if(minute < 45)
    {
        if(hour == 0)
        {
            hour  = 23;
        }
        else
        {
                hour--;
        }
        minute = minute + 15;
    }
    else
    {
        minute = minute - 45;
    }
     printf("%d %d",hour,minute);
    return 0;
}
