#include<stdio.h>

int constructor(int n);

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",constructor(n));
    return 0;
}

int constructor(int n)
{
    int i = 0, tmp;
    int construct = 0;
    while(i<1000000)
    {
        tmp = i;
        construct = tmp;
        while(tmp != 0)
        {
            construct = construct + tmp%10;
            tmp = tmp / 10;
        }
        if(construct == n)
        {
            return i;
        }
        else
        {
            i++;
        }
    }
    return 0;
}
