#include<stdio.h>
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
    }
}

void dfs(int n, int m, int start)
{
    stack[stack_top] = start;
    stack_top++;
    if(m == 1)
    {
        for(int i = 0; i < stack_top; i++)
        {
            printf("%d ", stack[i]);
        }
        printf("\n");
        stack_top--;
        return;
    }
    for(int i = 1; i <= n; i++)
    {
        if(stack[stack_top-1] > i)
        {
            continue;
        }
        dfs(n, m-1, i);
    }
    stack_top--;
    return;
}