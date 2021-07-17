#include<stdio.h>
int main()
{
    int word_cnt = 0;
    char buf[1000001];
    while (scanf("%s", buf) != EOF)
    {
        word_cnt++;
    }
    printf("%d",word_cnt);
}
