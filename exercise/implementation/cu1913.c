#include<stdio.h>
int arr[1000][1000] = {0};
int main()
{
    int x, y, stp = 1, qx = 0, qy = 0;
    int n, query, dir = 0;
    scanf("%d", &n);
    scanf("%d", &query);
    x = n/2 + 1;
    y = n/2 + 1;
    for(int i = 1 ; i <= n * n ; )
    {
        for(int j = 0; j < stp; j++)
        {
            if(i == query)
            {
                qx = x;
                qy = y;
            }
            arr[x][y] = i;
            i++;
            if(dir == 0)
            {
                y--;
            }
            else if(dir == 1)
            {
                x++;
            }
            else if(dir == 2)
            {
                y++;
            }
            else if(dir == 3)
            {
                x--;
            }
        }
        dir++;
        dir %= 4;
        for(int j = 0; j < stp; j++)
        {
            if(i == query)
            {
                qx = x;
                qy = y;
            }
            arr[x][y] = i;
            i++;
            if(dir == 0)
            {
                y--;
            }
            else if(dir == 1)
            {
                x++;
            }
            else if(dir == 2)
            {
                y++;
            }
            else if(dir == 3)
            {
                x--;
            }
        }
        stp++;
        dir++;
        dir %= 4;
    }
    for(int i = 1 ; i <= n; i++)
    {
        for(int j = 1; j <= n ; j++)
        {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    printf("%d %d", qy, qx);
}