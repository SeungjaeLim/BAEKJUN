#include<stdio.h>
#include<math.h>

void eratos(int* is_prime, int n);

int main()
{
    int input[1000], is_prime[246913] = {0, };
    int i = 0, cnt = 0;
    do
    {
        scanf("%d",&input[i]);
        i++;
    }while(input[i-1] != 0);
    eratos(is_prime, 246913);
    for(int j = 0; j < i - 1 ; j++)
    {
        for(int k = input[j]+1; k<=2*input[j]; k++)
        {
            if(is_prime[k])
            {
                cnt++;
            }
        }
        printf("%d\n",cnt);
        cnt = 0;
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
