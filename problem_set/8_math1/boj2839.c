#include<stdio.h>
int sugar_divide(int n, int cnt5);
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d", sugar_divide(n, n/5));
}
int sugar_divide(int n, int cnt5)
{
    if( (n - 5 * cnt5) % 3 == 0 )
    {
        return cnt5 + ((n - 5 * cnt5)/3);
    }
    else if((cnt5 == 0) && (n%3 != 0))
    {
        return -1;
    }
    else
    {
        return sugar_divide(n, cnt5 -1);
    }
}
