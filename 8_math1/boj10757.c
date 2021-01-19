#include <stdio.h>
#include <string.h>

int main()
{
    char a[10001], b[10001];
    int a_len, b_len, sum_len;
    int num_a[10001] = {0, }, num_b[10001] = {0, };
    int sum[10001] = {0, };
    scanf("%s %s", a, b);
    a_len = strlen(a);
    b_len = strlen(b);
    if(a_len > b_len)
    {
        sum_len = a_len + 1;
    }
    else
    {
        sum_len = b_len + 1;
    }

    for(int i = 0 ; i < a_len ; i++)
    {
        num_a[i] = a[a_len - i - 1] - '0';
    }
    for(int i = b_len - 1 ; i >= 0 ; i--)
    {
        num_b[b_len - 1 - i] = b[i] - '0';
    }
    for(int i = 0 ; i < sum_len ; i++)
    {
        sum[i] = sum[i] + num_a[i] + num_b[i];
        if(sum[i] >= 10)
        {
            sum[i+1]++;
            sum[i] = sum[i] - 10;
        }
    }
    for(int i = sum_len - 1 ; i >= 0 ; i--)
    {
        if((i == sum_len - 1) && sum[i] == 0)
        {
            continue;
        }
        else
        {
            printf("%d",sum[i]);
        }
    }
}
