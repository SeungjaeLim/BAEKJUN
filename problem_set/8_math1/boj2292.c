#include<stdio.h>
int main()
{
    long long int house_idx[100000] = {1, };
    long long int n, house_cnt;
    for(int i = 1 ; i < 100000 ; i++)
    {
        house_idx[i] = 2 + 3*(i-2)*(i-1);
    }
    house_idx[1] = 1;
    scanf("%lld",&n);
    for(int i = 0; i < 100000; i++)
    {
        if(n < house_idx[i])
        {
            house_cnt = i-1;
            break;
        }
    }
    printf("%lld",house_cnt);
}
