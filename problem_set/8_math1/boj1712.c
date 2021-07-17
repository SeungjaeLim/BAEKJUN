#include<stdio.h>
int main()
{
    long long a, b, c;
    long long net_profit;
    scanf("%lld %lld %lld", &a,&b,&c);
    net_profit = c - b;
    if(net_profit <= 0)
    {
        printf("-1");
    }
    else
    {
        printf("%lld",a/net_profit + 1);
    }
}
