#include<stdio.h>
#include<math.h>

void eratos(int* is_prime, int n);

int main()
{
    int m,n, is_prime[1000001] = {0, };
    scanf("%d %d",&m,&n);
    eratos(is_prime, 1000001);
    for(int i = m ; i <= n ; i++)
    {
        if(is_prime[i])
        {
            printf("%d\n",i);
        }
    }
}

void eratos(int* is_prime, int n)
{
    for(int i = 2; i < n ; i++)
    {
        is_prime[i] = 1;
    }
    for(int i = 2 ; i < sqrt(n) ; i++)
    {
        if(is_prime[i] == 1)
        {
            for(int j = i*i ; j < n ; j++ )
            {
                if(j%i == 0)
                {
                    is_prime[j] = 0;
                }
            }
        }
    }
    return;
}
