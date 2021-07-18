#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, cnt = 0;
    int *pScore;
    scanf("%d", &n);
    pScore = (int*)malloc(sizeof(int) * n);
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d", &pScore[i]);
    }
    for(int i = n-2 ; i >= 0 ; i--)
    {
        while(pScore[i+1] <= pScore[i])
        {
            pScore[i]--;
            cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}