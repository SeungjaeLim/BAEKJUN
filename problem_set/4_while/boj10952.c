#include<stdio.h>
int main()
{
    int a[10000], b[10000];
    int i = 1;
    int j = 1;
    a[0] = 1;
    b[0] = 1;
    while((a[i-1] != 0) && (b[i-1] != 0))
    {
        scanf("%d %d",&a[i],&b[i]);
        i++;
    }
    while(j<i - 1)
    {
        printf("%d\n",a[j]+b[j]);
        j++;
    }
    return 0;
}
