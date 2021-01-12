#include<stdio.h>
int main()
{
    int a[10000], b[10000];
    int i = 0;
    int j = 0;
    while(scanf("%d %d",&a[i],&b[i]) != EOF)
    {
        i++;
    }
    while(j<i)
    {
        printf("%d\n",a[j]+b[j]);
        j++;
    }
    return 0;
}
