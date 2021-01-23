#include<stdio.h>

int blackjack(int* card, int n, int m);

int main()
{
    int n, m;
    int card[300000] = {0 , };
    scanf("%d %d", &n, &m);
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&card[i]);
    }
    printf("%d",blackjack(card, n, m));
}

int blackjack(int* card, int n, int m)
{
    int sum = 0;
    int ans = 0;
    for(int i = 0; i < n ; i++)
    {
        for(int j = i + 1 ; j < n ; j++)
        {
            for(int k =  j + 1; k < n ; k++)
            {
                sum = card[i] + card[j] + card[k];
                if(sum <= m)
                {
                    if(sum > ans)
                    {
                        ans = sum;
                    }
                }
            }
        }
    }
    return ans;
}
