#include<stdio.h>
int main()
{
    int x, y, w, h;
    int dis_x, dis_y;
    scanf("%d %d %d %d", &x, &y, &w, &h);
    if(w/2 >= x)
    {
        dis_x = x;
    }
    else
    {
        dis_x = w - x;
    }
    if(h/2 >= y)
    {
        dis_y = y;
    }
    else
    {
        dis_y = h - y;
    }
    if(dis_x > dis_y)
    {
        printf("%d", dis_y);
    }
    else
    {
        printf("%d", dis_x);
    }
}
