#include<stdio.h>
int main()
{
    int n, k, cnt = 0;
    char table[20000];
    scanf("%d %d", &n, &k);
    scanf("%s", table);
    for(int i = 0 ; i < n; i++)
    {
        if(table[i] == 'P')
        {
            for(int j = i - k ; j<= i + k ; j++)
            {
                if(j<0 || j>=n)
                {
                    continue;
                }
                if( table[j] == 'H')
                {
                    cnt++;
                    table[j] = 'E';
                    break;
                }
            }
        }
    }
    printf("%d", cnt);
    return 0;
}
