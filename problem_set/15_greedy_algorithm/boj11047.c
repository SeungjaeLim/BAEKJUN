#include<stdio.h>
void find_min_coin(int* a, int k, int coin, int idx);

int main()
{
    int n, k;
    int a[10];
    scanf("%d %d",&n, &k);
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&a[i]);
    }
    find_min_coin(a, k, 0, n-1);
    return 0;
}

void find_min_coin(int* a, int k, int coin, int idx)
{
    if(k == 0)
    {
        printf("%d",coin);
        return;
    }
    else
    {
        while(k - a[idx]>=0)
        {
            k = k - a[idx];
            coin++;
        }
        if(k == 0)
        {
            printf("%d",coin);
            return;
        }
        else
        {
            find_min_coin(a, k, coin, idx - 1);
        }
    }
}
