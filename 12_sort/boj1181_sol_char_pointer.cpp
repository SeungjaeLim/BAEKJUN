#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;

bool compare(char* a, char* b);

int main()
{
    int n, cnt = 0, redup_i = 0;
    char buf[51];
    char* word[20001];
    scanf("%d",&n);
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%s",buf);
        for(int j = 0 ; j < redup_i ; j++)
        {
            if(strcmp(buf,word[j]) == 0)
            {
                cnt++;
            }
        }
        if(cnt == 0)
        {

            word[redup_i] = (char*)malloc(sizeof(char)*(strlen(buf)+1));
            strcpy(word[redup_i],buf);
            redup_i++;
        }
        cnt = 0;
    }
    sort(word, word + redup_i, compare);
    for(int i = 0 ; i < redup_i ; i++)
    {
        printf("%s\n", word[i]);
    }
}

bool compare(char* a, char* b)
{
    if(strlen(a) != strlen(b))
    {
        return strlen(a) < strlen(b);
    }
    else
    {
        return strcmp(a,b) < 0;
    }
}
