#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int dial_request_time(int* dial, int len);

int main()
{
    char buf[16];
    int dial[16];
    int len, time;
    scanf("%s",buf);
    len = strlen(buf);
    for(int i = 0 ; i < len ; i++)
    {
        if((buf[i]-'A')/3 == 6 && (buf[i]-'A')%3 == 0)
        {
            buf[i]--;
        }
        if((buf[i]-'A')/3 == 7 && (buf[i]-'A')%3 == 0)
        {
            buf[i]--;
        }
        else if((buf[i]-'A')/3 >= 7)
        {
            buf[i] = 'A' + 22;
        }
        dial[i] = (buf[i]-'A')/3 + 2;
    }
    time = dial_request_time(dial, len);
    printf("%d",time);
    return 0;
}

int dial_request_time(int* dial, int len)
{
    int time = 0;
    for(int i = 0 ; i < len ; i++)
    {
        time = time + dial[i] + 1;
    }
    return time;
}
