#include<stdio.h>
int main()
{
    int n, tmp;
    int cycle_length = 0;
    scanf("%d",&n);
    tmp = n;
    do
    {
        tmp = (tmp%10)*10 + (tmp/10 + tmp%10)%10;
        cycle_length++;
    } while(n != tmp);
    printf("%d",cycle_length);
    return 0;
}
