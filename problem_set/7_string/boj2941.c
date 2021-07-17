#include<stdio.h>
#include<string.h>

int count_croatia_alphabet(char* buf);

int main()
{
    char buf[101];
    scanf("%s", buf);
    printf("%d",count_croatia_alphabet(buf));
}

int count_croatia_alphabet(char* buf)
{
    int len, cnt = 0;
    len = strlen(buf);
    for(int i = 0 ; i < len ; i++)
    {
        if(buf[i] == 'c' && i+1 < len)
        {
            if(buf[i+1] == '=')
            {
                i++;
            }
            else if(buf[i+1] == '-')
            {
                i++;
            }
        }
        else if(buf[i] == 'd')
        {
            if(i+1 < len && buf[i+1] == '-')
            {
                i++;
            }
            else if(i+2<len && buf[i+1] == 'z' && buf[i+2] == '=')
            {
                i = i+2;
            }
        }
        else if(buf[i] == 'l' && i+1 < len)
        {
            if(buf[i+1] == 'j')
            {
                i++;
            }
        }
        else if(buf[i] == 'n' && i+1 < len)
        {
            if(buf[i+1] == 'j')
            {
                i++;
            }
        }
        else if(buf[i] == 's' && i+1 < len)
        {
            if(buf[i+1] == '=')
            {
                i++;
            }
        }
        else if(buf[i] == 'z' && i+1 < len)
        {
            if(buf[i+1] == '=')
            {
                i++;
            }
        }
        cnt++;
    }
    return cnt;
}
