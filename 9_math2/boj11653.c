#include<stdio.h>
#include<math.h>

void eratos(int* is_prime, int n);
void factorization(int* is_prime, int n);
int main()
{
    int n, is_prime[100001] = {0, };
    scanf("%d",&n);
    if(n == 1)
    {
        return 0;
    }
    eratos(is_prime, 100001);
    factorization(is_prime, n);
    return 0;
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

void factorization(int* is_prime, int n)
{
    if(n == 1)
    {
        return;
    }
    else
    {
        for(int i = 2 ; i < 100001 ; i++)
        {
            if(is_prime[i])
            {
                if(n%i == 0)
                {
                    printf("%d\n", i);
                    factorization(is_prime, n/i);
                    return;
                }
            }
        }
    }
    return;
}
