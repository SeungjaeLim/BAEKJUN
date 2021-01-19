#include<stdio.h>
int main()
{
    int t, h[10000], w[10000], n[10000];
    int floor, room_num;
    scanf("%d",&t);
    for(int i = 0; i< t; i++)
    {
        scanf("%d %d %d",&h[i], &w[i], &n[i]);
    }
    for(int i = 0; i < t; i++)
    {
        floor = (n[i] % h[i] == 0) ? h[i] : n[i] % h[i];
        room_num = (n[i] % h[i] == 0) ? n[i] / h[i] : n[i] / h[i] + 1;
        if(room_num<10)
        {
            printf("%d0%d\n",floor, room_num);
        }
        else
        {
            printf("%d%d\n",floor, room_num);
        }
    }
    return 0;
}
