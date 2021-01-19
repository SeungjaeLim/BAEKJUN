#include<stdio.h>
int main()
{
    int frac_sum[10000] = {0, };
    int x, idx;
    scanf("%d",&x);
    for(int i = 2 ; i < 10000 ; i++)
    {
        frac_sum[i] = i * (i-1)/2;
    }
    for(int i = 2; i < 10000 ; i++)
    {
        if(frac_sum[i] >= x)
        {
            x = x - frac_sum[i-1];
            idx = i;
            break;
        }
    }
    if(idx % 2 != 0)
    {
        printf("%d/%d",x,idx - x);
    }
    else
    {
        printf("%d/%d",idx - x,x);
    }

}
