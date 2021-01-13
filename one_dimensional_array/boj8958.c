#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int n, buf_len;
    int point = 0;
    int score[100]={0,};
    char buffer[100];
    char* ox_result[100];
    scanf("%d",&n);
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%s",buffer);
        buf_len = strlen(buffer) + 1;
        char* new_ox_result = (char*)malloc(sizeof(char)*(buf_len));
        strcpy(new_ox_result, buffer);
        ox_result[i] = new_ox_result;
    }
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0; j < strlen(ox_result[i]); j++)
        {
            if(ox_result[i][j] == 'O')
            {
                point++;
                score[i] = score[i] + point;
            }
            else
            {
                point = 0;
            }
        }
        point = 0;
    }
    for(int i = 0 ; i < n ; i++)
    {
        printf("%d\n",score[i]);
    }
    for(int i = 0 ; i < n ; i++)
    {
        free(ox_result[i]);
    }
}
