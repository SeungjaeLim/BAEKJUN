#include<stdio.h>
int main()
{
    int n;
    int a[100],b[100];
    scanf("%d",&n);
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d %d",&a[i],&b[i]);
    }
    for(int i = 0 ; i < n ; i++)
    {
        printf("%d\n",a[i]+b[i]);
    }
    return 0;
}
