#include<stdio.h>
#include<string.h>

int is_group_word(char* buf);

int main()
{
    int n, cnt_group_word = 0;
    char buf[101];
    scanf("%d",&n);
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%s",buf);
        cnt_group_word = cnt_group_word + is_group_word(buf);
    }
    printf("%d",cnt_group_word);
}

int is_group_word(char* buf)
{
    int alphabet_cnt = 0;
    int len = strlen(buf);
    char mem;
    char alphabet_log[101] = {0,};
    for(int i = 0 ; i < len ; i++)
    {
        if(mem == buf[i])
        {
            continue;
        }
        else
        {
            for(int j = 0 ; j < alphabet_cnt; j++)
            {
                if(alphabet_log[j] == buf[i])
                {
                    return 0;
                }

            }
            mem = buf[i];
            alphabet_log[alphabet_cnt] = buf[i];
            alphabet_cnt++;
        }
    }
    return 1;
}

