#include<stdio.h>

int bulk_ranking(int n, int bulk[][2], int idx);

int main()
{
    int n;
    int bulk[51][2];
    scanf("%d", &n);
    for(int i = 0; i < n ; i++)
    {
        scanf("%d %d", &bulk[i][0], &bulk[i][1]);
    }
    for(int i = 0 ; i < n ; i ++)
    {
        printf("%d ",bulk_ranking(n, bulk, i));
    }
}

int bulk_ranking(int n, int bulk[][2], int idx)
{
    int k = 1;
    for(int i = 0 ; i < n ; i++)
    {
        if((bulk[i][0] > bulk[idx][0]) && (bulk[i][1] > bulk[idx][1]))
        {
            k++;
        }
    }
    return k;
}
