#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int Lscore = 0, Rscore = 0;
    char* score = (char*)calloc(sizeof(char), 9);
    scanf("%s", score);
    int len = strlen(score);
    for(int i = 0; i < len/2; i++)
    {
        Lscore += *(score + i) + '0';
        Rscore += *(score + len - 1 - i) + '0';
    }
    if(Lscore == Rscore)
    {
        printf("LUCKY");
    }
    else
    {
        printf("READY");
    }
    return 0;
}
