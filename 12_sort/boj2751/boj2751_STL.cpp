#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int n, num[1000001];
    scanf("%d",&n);
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&num[i]);
    }
    sort(num, num + n);
    for(int i = 0 ; i < n ; i++)
    {
        printf("%d\n",num[i]);
    }
    return 0;
}
