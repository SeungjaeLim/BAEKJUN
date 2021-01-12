#include<stdio.h>
int main()
{
    int n;
    int a[1000001],b[1000001];
    scanf("%d",&n);
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d %d",&a[i],&b[i]);
    }
    for(int i = 0 ; i < n ; i++)
    {
        printf("Case #%d: %d + %d = %d\n",i+1,a[i],b[i],a[i]+b[i]);
    }
    return 0;
}
