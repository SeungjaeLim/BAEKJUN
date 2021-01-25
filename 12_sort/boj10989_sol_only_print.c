#include<stdio.h>

int main()
{
    int n, tmp, count_arr[10001] = {0,};
    scanf("%d",&n);
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&tmp);
        count_arr[tmp]++;
    }
    for(int i = 1 ; i < 10001; i++)
    {
        while(count_arr[i] > 0)
        {
            printf("%d\n",i);
            count_arr[i]--;
        }
    }
    return 0;
}
