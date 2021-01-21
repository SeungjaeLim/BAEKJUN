#include<stdio.h>
#include<math.h>

void eratos(int* is_prime, int n);

int main()
{
    int t, small_prime, big_prime;
    int input[10000], is_prime[10001] = {0, };

    scanf("%d",&t);
    for(int i = 0 ; i < t ; i ++)
    {
        scanf("%d",&input[i]);
    }
    eratos(is_prime, 10001);
    for(int i = 0 ; i < t ; i++)
    {
        small_prime = input[i]/2;
        big_prime = input[i]/2;
        for(;;)
        {
            if(is_prime[small_prime] && is_prime[big_prime])
            {
                printf("%d %d\n",small_prime, big_prime);
                break;
            }
            else
            {
                small_prime--;
                big_prime++;
            }
        }
    }
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
