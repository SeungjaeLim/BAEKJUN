#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int* charstr_to_intstr(char* buf, int len);
int dial_request_time(int* dial, int len);

int main()
{
    char buf[16];
    int len, time;
    scanf("%s",buf);
    len = strlen(buf);
    int* dial = charstr_to_intstr(buf, len);
    time = dial_request_time(dial, len);
    printf("%d",time);
    return 0;
}

int* charstr_to_intstr(char* buf, int len)
{
    int intstr[16];
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
        intstr[i] = (buf[i]-'A')/3 + 2;
    }
    return intstr;
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
