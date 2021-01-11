#include<stdio.h>
int main()
{
    int x, y;
    scanf("%d %d",&x,&y);
    if(x>0)
    {
        if(y>0)
        {
            printf("1");
        }
        else if(y<0)
        {
            printf("4");
        }
        else
        {
            return 0;
        }
    }
    else if(x<0)
    {
        if(y>0)
        {
            printf("2");
        }
        else if(y<0)
        {
            printf("3");
        }
        else
        {
            return 0;
        }
    }
    else{
        return 0;
    }
    return 0;
}
