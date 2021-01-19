#include<stdio.h>
int main()
{
    int c;
    int n[100];
    int score[100][1000];
    float ratio[100] = {0, };
    float avg[100] = {0, };
    scanf("%d",&c);
    for(int i = 0; i < c; i++)
    {
        scanf("%d",&n[i]);
        for(int j = 0; j<n[i] ; j++)
        {
            scanf("%d",&score[i][j]);
            avg[i] = avg[i] + score[i][j];
        }
        avg[i] = avg[i] / n[i];
    }
    for(int i = 0; i < c; i++)
    {
        for(int j = 0; j<n[i] ; j++)
        {
            if( (float)score[i][j] > avg[i])
            {
                ratio[i]++;
            }
        }
        printf("%.3f%%\n", ratio[i]/n[i] * 100);
    }
    return 0;
}
