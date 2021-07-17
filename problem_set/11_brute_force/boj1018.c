#include<stdio.h>
int change_start_black(int x, int y, char (*chess_board)[51]);
int change_start_white(int x, int y, char (*chess_board)[51]);
int main()
{
    int m, n, tmp;
    char chess_board[51][51];
    int cnt = 100000;
    scanf("%d %d", &n, &m);
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%s",chess_board[i]);
    }
    for(int i = 0 ; i <= n - 8 ; i++)
    {
        for(int j = 0 ; j <= m - 8; j++)
        {
            tmp = change_start_black(j, i, chess_board);
            if(tmp < cnt)
            {
                cnt = tmp;
            }
            tmp = change_start_white(j, i, chess_board);
            if(tmp < cnt)
            {
                cnt = tmp;
            }
        }
    }
    printf("%d", cnt);
}
int change_start_black(int x, int y, char (*chess_board)[51])
{
    int cnt = 0;
    for(int i = y ; i < y + 8 ; i++)
    {
        for(int j = x ; j < x + 8 ; j++)
        {
            if((i+j)%2 == 0)
            {
                if(chess_board[i][j] != 'B')
                {
                    cnt++;
                }
            }
            else
            {
                if(chess_board[i][j] != 'W')
                {
                    cnt++;
                }
            }
        }
    }
    return cnt;
}
int change_start_white(int x, int y, char (*chess_board)[51])
{
    int cnt = 0;
    for(int i = y ; i < y + 8 ; i++)
    {
        for(int j = x ; j < x + 8 ; j++)
        {
            if((i+j)%2 == 0)
            {
                if(chess_board[i][j] != 'W')
                {
                    cnt++;
                }
            }
            else
            {
                if(chess_board[i][j] != 'B')
                {
                    cnt++;
                }
            }
        }
    }
    return cnt;
}
