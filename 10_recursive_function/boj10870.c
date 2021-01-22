#include<stdio.h>
long long int fibo(long long int* a, int n);
int main()
{
    long long int a[10001] = {0, };
    int n;
    scanf("%d",&n);
    printf("%lld",fibo(a, n));
}
long long int fibo( long long int* a, int n)
{
    if(a[n] != 0)
    {
        return a[n];
    }
    else if(n == 0)
    {
        a[0] = 0;
        return 0;
    }
    else if(n == 1)
    {
        a[1] = 1;
        return 1;
    }
    else
    {
        a[n] = fibo(a, n-1) + fibo(a, n-2);
        return a[n];
    }

}
