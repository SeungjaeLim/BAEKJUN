#include<stdio.h>
int cnt = 0;
int x_visited[16] = {0};
int left_cross[32]= {0};
int right_cross[32] = {0};

void dfs(int size, int x, int y);

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        dfs(n, i, 1);
        for(int j = 0 ; j < 16; j++)
        {
            x_visited[j] = 0;
        }
        for(int j = 0 ; j < 32; j++)
        {
            left_cross[j] =0;
            right_cross[j] = 0;
        }
    }
    printf("%d", cnt);
}

void dfs(int size, int x, int y)
{
    x_visited[x] = 1;
    left_cross[x+y] = 1;
    right_cross[x-y+size] = 1;
    if(y == size)
    {
        cnt++;
        x_visited[x] = 0;
        left_cross[x+y] = 0;
        right_cross[x-y+size] = 0;
        return;
    }
    for(int i = 1; i <= size; i++)
    {
        if(left_cross[i+y+1]||right_cross[i-(y+1)+size])
        {
            continue;
        }
        if(!x_visited[i])
        {
            dfs(size, i, y+1);
        }
    }
    x_visited[x] = 0;
    left_cross[x+y] = 0;
    right_cross[x-y+size] = 0;
    return;
}
