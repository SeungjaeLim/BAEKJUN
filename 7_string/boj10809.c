#include<stdio.h>
#include<string.h>
int main()
{
    char buf[101];
    int alphabet_cnt[26];
    scanf("%s",buf);
    for(int j = 0; j < 26 ; j++)
    {
        alphabet_cnt[j] = -1;
        for(int i = 0 ; i < strlen(buf) ; i++)
        {
            if(buf[i] == 'a' + j)
            {
                alphabet_cnt[j] = i;
                break;
            }
        }
    }
    for(int j = 0; j < 26 ; j++)
    {
        printf("%d ",alphabet_cnt[j]);
    }
    return 0;
}
