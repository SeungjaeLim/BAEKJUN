#include<stdio.h>

int end_number(int n);

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",end_number(n));
}

int end_number(int n)
{
    int idx = 0;
    int tmp;
    int i;
    for( i = 666 ; ; i++)
    {
        tmp = i;
        while(tmp>=666)
        {
            if(tmp % 1000 == 666)
            {
                idx++;
                break;
            }
            tmp = tmp / 10;
        }
        if(idx == n)
        {
            break;
        }
    }
    return i;
}
