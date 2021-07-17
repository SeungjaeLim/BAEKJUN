#include<stdio.h>
#include<algorithm>

using namespace std;

int card[500000];

int bsearch(int x, int n);

int main()
{
    int n,m,tmp;
    scanf("%d", &n);
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d", &card[i]);
    }
    sort(card, card+n);
    scanf("%d", &m);
    for(int i = 0 ; i < m ; i++)
    {
        scanf("%d",&tmp);
        printf("%d ", bsearch(tmp, n) - bsearch(tmp-1, n));
    }
    return 0;
}


int bsearch(int x, int n)
{
    int left = -1;
    int right = n;
    while(left + 1 < right)
    {
        int mid = (left + right) / 2;
        if (x >= card[mid])
        {
            left = mid;
        }
        else
        {
            right = mid;
        }
    }
    return right;
}