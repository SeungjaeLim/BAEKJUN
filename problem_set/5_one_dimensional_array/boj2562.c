#include<stdio.h>
int main()
{
    int max = -1000000;
    int n, a[1000000], idx;
    for(int i = 0;i<9;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>max)
        {
            max = a[i];
            idx = i+1;
        }
    }
    printf("%d\n%d",max,idx);
}
