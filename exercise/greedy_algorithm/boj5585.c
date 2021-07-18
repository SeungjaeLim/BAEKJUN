#include<stdio.h>
int main()
{
    int pay, cnt_coin = 0;
    int change[] = {500, 100, 50, 10, 5, 1};
    scanf("%d", &pay);
    pay = 1000 - pay;
    for(int i = 0 ; i < 6; i++)
    {
        while(pay >= change[i])
        {
            pay -= change[i];
            cnt_coin++;
        }
    }
    printf("%d", cnt_coin);
    return 0;
}