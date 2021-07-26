#include<stdio.h>
int visited[9] = {0};
int stack[9] = {0};
int stack_top = 0;

void dfs(int n, int m, int start);

int main()
{
    int n,m;
    scanf("%d %d", &n, &m);
    for(int i = 1; i <= n; i++)
    {
        dfs(n, m, i);
        for(int i = 0 ; i < 9; i++)
        {
            visited[i] = 0;
        }
    }
}

void dfs(int n, int m, int start)
{
    stack[stack_top] = start;
    stack_top++;
    visited[start] = 1;
    if(m == 1)
    {
        for(int i = 0; i < stack_top; i++)
        {
            printf("%d ", stack[i]);
        }
        printf("\n");
        stack_top--;
        visited[start] = 0;
        return;
    }
    for(int i = 1; i <= n; i++)
    {
        if(stack[stack_top-1] > i)
        {
            continue;
        }
        if(!visited[i])
        {
            dfs(n, m-1, i);
        }
    }
    visited[start] = 0;
    stack_top--;
    return;
}