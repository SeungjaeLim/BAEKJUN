#include<stdio.h>
int chairman(int k, int n);

int home[15][15] = {0, };

int main()
{
    int t, k[1000], n[1000];
    scanf("%d", &t);
    for(int i = 0 ; i < t ; i++)
    {
        scanf("%d %d",&k[i],&n[i]);
    }
    for(int i = 0 ; i < t ; i++)
    {
        printf("%d\n",chairman(k[i],n[i]));
    }
}

int chairman(int k, int n)
{
    if(k == 0)
    {
        home[k][n] = n;
        return n;
    }
    else if(n == 1)
    {
        home[k][n] = 1;
        return n;
    }
    else if(home[k][n] != 0)
    {
        return home[k][n];
    }
    else
    {
        home[k][n] = chairman(k-1, n) + chairman(k, n-1);
        return home[k][n];
    }
}
