#include<stdio.h>
#include<algorithm>

using namespace std;

int data[100000];

int main()
{
    int n, m, tmp;
    scanf("%d", &n);
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&data[i]);
    }
    sort(data, data + n);
    scanf("%d", &m);
    for(int i = 0 ; i < m ; i++)
    {
        scanf("%d", &tmp);
        if(binary_search(data, data + n, tmp))
        {
            printf("1\n");
        }
        else
        {
            printf("0\n");
        }
    }
    return 0;
}