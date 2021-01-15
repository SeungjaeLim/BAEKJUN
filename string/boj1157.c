#include<stdio.h>
#include<string.h>
int main()
{
    char buf[1000000];
    int alphabet_cnt[26];
    int max = 0, dup = 0;
    int max_alphabet = 0;
    int len;
    scanf("%s",buf);
    len = strlen(buf);
    for(int i = 0 ; i < len ; i++)
    {
        if(buf[i] - 'a' >= 0)
        {
            alphabet_cnt[buf[i]-'a']++;
        }
        else
        {
            alphabet_cnt[buf[i]-'A']++;
        }
    }
    for(int i = 0 ; i < 26 ; i++)
    {
        if(max < alphabet_cnt[i])
        {
            max = alphabet_cnt[i];
            max_alphabet = i;
        }
    }
    for(int i = 0 ; i < 26 ; i++)
    {
        if(alphabet_cnt[i] == max)
        {
            dup++;
        }
    }
    if(dup == 1)
    {
        printf("%c",max_alphabet+'A');
    }
    else
    {
        printf("?");
    }
}
