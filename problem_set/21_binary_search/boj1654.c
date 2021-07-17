#include<stdio.h>
#define INT_MAX 2147483647

long long int line[10000];

long long int cut_bsearch(long long int k, long long int n, long long int left, long long int right);

int main()
{
    long long int k, n;
    scanf("%lld %lld", &k, &n);
    for(int i = 0 ; i < k ; i++)
    {
        scanf("%lld", &line[i]);
    }
    printf("%lld", cut_bsearch(k, n, 0, INT_MAX));
    return 0;
}

long long int cut_bsearch(long long int k, long long int n, long long int left, long long int right)
{
    long long int sum = 0;
    long long int mid = (left + right) / 2;
    if(left > right)
    {
        return mid;
    }
    if(mid == 0)
    {
        return right;
    }
    for(int i = 0 ; i < k; i++)
    {
        sum += line[i] / mid;
    }
    if(sum >= n)
    {
        return cut_bsearch(k, n , mid+1, right);
    }
    else
    {
        return cut_bsearch(k, n, left, mid-1);
    }
}
