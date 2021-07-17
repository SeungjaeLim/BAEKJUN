#include<stdio.h>
int main()
{
    int n, num[100], is_prime[1001] = {0, };
    int cnt =  0;
    scanf("%d",&n);
    for(int i = 0 ; i < n ; i ++)
    {
        scanf("%d",&num[i]);
    }
    for(int i = 2; i < 1001 ; i++)
    {
        is_prime[i] = 1;
    }
    for(int i = 2 ; i < 31 ; i++)
    {
        if(is_prime[i] == 1)
        {
            for(int j = i*i ; j < 1001 ; j++ )
            {
                if(j%i == 0)
                {
                    is_prime[j] = 0;
                }
            }
        }
    }
    for(int i = 0 ; i < n ; i++)
    {
        if(is_prime[num[i]])
        {
            cnt++;
        }
    }
    printf("%d",cnt);
}
