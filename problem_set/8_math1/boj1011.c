#include<stdio.h>
int main()
{
    long long int velo[100000] = {0, 1, 2, 4, 6, };
    long long int distance[1000], x[1000], y[1000];
    int t;
    scanf("%d",&t);
    for(int i = 0; i < t ; i++)
    {
        scanf("%lld %lld",&x[i],&y[i]);
        distance[i] = y[i] - x[i];
    }
    for(long long int i = 5; i < 100000 ; i++ )
    {
        if(i%2 == 1)
        {
            velo[i] = (i/2 + 1) * (i/2 + 1);
        }
        else
        {
            velo[i] = velo[i-1] + i/2;
        }
    }
    for(int i = 0; i < t ; i++)
    {
        for(int j = 1 ; j < 100000 ; j++)
        {
            if(distance[i] <= velo[j])
            {
                printf("%d\n",j);
                break;
            }
        }
    }
}
