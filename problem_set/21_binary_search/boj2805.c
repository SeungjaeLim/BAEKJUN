#include<stdio.h>
#define TREE_MAX 1000000000
#define TREE_MIN 1

long long int tree[1000000];

long long int cut_bsearch(long long int tree_cnt, long long int tree_require, long long int left, long long int right);

int main()
{
    long long int tree_cnt, tree_require;
    scanf("%lld %lld", &tree_cnt, &tree_require);
    for(int i = 0 ; i < tree_cnt ; i++)
    {
        scanf("%lld", &tree[i]);
    }
    printf("%lld", cut_bsearch(tree_cnt, tree_require, TREE_MIN, TREE_MAX));
    return 0;
}

long long int cut_bsearch(long long int tree_cnt, long long int tree_require, long long int left, long long int right)
{
    long long int sum = 0, tmp;
    long long int mid = (left + right) / 2;
    if(left > right)
    {
        return mid;
    }
    if(mid == 0)
    {
        return right;
    }
    for(int i = 0 ; i < tree_cnt; i++)
    {
        tmp = tree[i] - mid;
        if(tmp > 0)
        {
            sum += tmp;
        }
    }
    if(sum >= tree_require)
    {
        return cut_bsearch(tree_cnt, tree_require, mid+1, right);
    }
    else
    {
        return cut_bsearch(tree_cnt, tree_require, left, mid-1);
    }
}
