#include<stdio.h>
int main()
{
    int input[10];
    int cnt = 0;
    int num_count[42] = {0, };
    for(int i = 0; i < 10; i++)
    {
        scanf("%d",&input[i]);
    }
    for(int i = 0; i< 10 ; i++)
    {
        num_count[input[i]%42]++;
    }
    for(int i = 0; i<42; i++)
    {
        if(num_count[i] != 0)
        {
            cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}
