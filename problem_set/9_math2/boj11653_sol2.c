#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i = 2; i < 10000001 || n != 1;)
    {
        if(n%i == 0)
        {
            printf("%d\n",i);
            n = n / i;
        }
        else
        {
            i++;
        }
    }
    return 0;
}
