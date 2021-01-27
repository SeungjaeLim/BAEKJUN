#include<stdio.h>
#include<algorithm>
#include<stdlib.h>
using namespace std;

struct dot
{
    int x, y;
};

bool compare(struct dot* a, struct dot* b);

int main()
{
    int n;
    struct dot *dotp[100001];
    scanf("%d", &n);
    for(int i = 0 ; i < n ; i++)
    {
        dotp[i] = (struct dot*)malloc(sizeof(struct dot));
        scanf("%d %d", &(dotp[i] -> x), &(dotp[i] -> y));
    }
    sort(dotp, dotp+n,compare);
    for(int i = 0 ; i < n ; i++)
    {
        printf("%d %d\n",dotp[i]->x, dotp[i]->y);
    }
    for(int i = 0 ; i < n ; i++)
    {
        free(dotp[i]);
    }
}

bool compare(struct dot* a, struct dot* b)
{
    if( a->y != b->y )
    {
        return a->y < b->y;
    }
    else
    {
        return a->x < b->x;
    }
}
