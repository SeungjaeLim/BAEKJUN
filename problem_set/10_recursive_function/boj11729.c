#include<stdio.h>
#include<math.h>

void hanoi(int n, int from, int to, int via);
void move(int from, int to);

int main()
{
    int n;
    int cnt;
    scanf("%d",&n);
    cnt = pow(2,n) - 1;
    printf("%d\n", cnt);
    hanoi(n, 1, 3, 2);
}

void hanoi(int n, int from, int to, int via)
{
    if(n == 1)
    {
        move(from, to);
    }
    else
    {
        hanoi(n-1, from, via, to);
        move(from, to);
        hanoi(n-1, via, to, from);
    }
    return;
}

void move(int from, int to)
{
    printf("%d %d\n",from, to);
    return;
}
