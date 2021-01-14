#include<stdio.h>

int detect(int n);

int main()
{
    int n;
    int cnt = 0;
    scanf("%d",&n);
    for( int i = 1 ; i <= n ; i++ )
    {
        cnt = cnt + detect(i);
    }
    printf("%d",cnt);
}

int detect(int n)
{
    int digit = 0;
    int num_seq[1000];
    int is_ap = 1;
    if(n/100 == 0)
    {
        return 1;
    }
    for(int i = 0 ; n > 0 ; i++)
    {
        num_seq[i] = n % 10;
        n = n / 10;
        digit++;
    }
    for(int i = 0 ; i < digit ; i++)
    {
        if( i == 0 || i == digit - 1)
        {
            continue;
        }
        if((float) num_seq[i] != (num_seq[i-1] + num_seq[i+1]) / 2.0 )
        {
            is_ap = 0;
        }
    }
    if(is_ap)
    {
        return 1;
    }
    else{
        return 0;
    }

}
