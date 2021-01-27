#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;

struct word
{
    int len;
    char arr[51];
};

bool compare(struct word* a, struct word* b);

int main()
{
    int n, cnt = 0, redup_n, redup_i = 0;
    char buf[51];
    struct word* wordp[20001];
    scanf("%d",&n);
    redup_n = n;
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%s",buf);
        for(int j = 0 ; j < redup_i ; j++)
        {
            if(strcmp(buf,wordp[j]->arr) == 0)
            {
                cnt++;
            }
        }
        if(cnt == 0)
        {
            wordp[redup_i] = (struct word*)malloc(sizeof(struct word));
            wordp[redup_i]->len = strlen(buf);
            strcpy(wordp[redup_i]->arr,buf);
            redup_i++;
        }
        cnt = 0;
    }
    sort(wordp, wordp + redup_i, compare);
    for(int i = 0 ; i < redup_i ; i++)
    {
        printf("%s\n", wordp[i]->arr);
    }
}

bool compare(struct word* a, struct word* b)
{
    if(a->len == b->len)
    {
        for(int i=0; i< a->len; i++)
        {
            if(a->arr[i] == b->arr[i])
            {
                continue;
            }
            else if(a->arr[i] < b->arr[i])
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
    return a->len < b->len;
}
