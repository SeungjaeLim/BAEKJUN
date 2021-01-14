#include<stdio.h>
void d(int* self_number, int n);

int main()
{
    int self_number[10001] = {0, };
    for(int i = 1; i<10001; i++)
    {
        d(self_number, i);
    }
    for(int i = 1 ; i < 10001; i++)
    {
        if(self_number[i] == 0)
        {
            printf("%d\n",i);
        }
    }
}

void d(int* self_number, int n)
{
    int sum, tmp;
    while( n <= 10000 )
    {
        tmp = n;
        sum = tmp;
        while(tmp > 0)
        {
            sum = sum + tmp%10;
            tmp = tmp/10;
        }
        if(sum > 10000)
        {
            break;
        }
        else
        {
            self_number[sum]++;
        }
        n = sum;
    }
}
