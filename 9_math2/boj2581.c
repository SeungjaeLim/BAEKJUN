#include<stdio.h>
int main()
{
    int m,n, is_prime[10001] = {0, };
    int sum =  0, min_prime = -1;
    scanf("%d %d",&m,&n);
    for(int i = 2; i < 10001 ; i++)
    {
        is_prime[i] = 1;
    }
    for(int i = 2 ; i < 101 ; i++)
    {
        if(is_prime[i] == 1)
        {
            for(int j = i*i ; j < 10001 ; j++ )
            {
                if(j%i == 0)
                {
                    is_prime[j] = 0;
                }
            }
        }
    }
    for(int i = m ; i <= n ; i++)
    {
        if(is_prime[i])
        {
            sum = sum + i;
            if(min_prime == -1)
            {
                min_prime = i;
            }
        }
    }
    if(min_prime == -1)
    {
        printf("%d", min_prime);
    }
    else
    {
        printf("%d\n%d",sum, min_prime);
    }
}
