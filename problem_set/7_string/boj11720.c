#include<stdio.h>
int main()
{
    char buf[1000];
    int n, sum = 0;
    scanf("%d",&n);
    scanf("%s",buf);
    for(int i = 0 ; i < n ; i++)
    {
        sum = sum + (buf[i] - '0');
    }
    printf("%d",sum);
    return 0;
}
