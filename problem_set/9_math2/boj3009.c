#include<stdio.h>
int main()
{
    int x[1001]={0,}, y[1001] = {0,};
    int ans[2];
    int x_tmp, y_tmp;
    for(int i = 0 ; i < 3 ; i++)
    {
        scanf("%d %d",&x_tmp,&y_tmp);
        x[x_tmp]++;
        y[y_tmp]++;
    }
    for(int i = 0 ; i < 1001 ; i++)
    {
        if(x[i] == 1)
        {
            ans[0] = i;
        }
    }
    for(int i = 0 ; i < 1001 ; i++)
    {
        if(y[i] == 1)
        {
            ans[1] = i;
        }
    }
    printf("%d %d",ans[0], ans[1]);
}
