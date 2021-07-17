#include<stdio.h>
#include<stdlib.h>

void counting_sort(int* arr, int n);

int ans[10000001] = {0,};

int main()
{
    int n, num[10000001];
    scanf("%d",&n);
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&num[i]);
    }
    counting_sort(num, n);
    for(int i = 0 ; i < n ; i++)
    {
        printf("%d\n",ans[i]);
    }
    return 0;
}

void counting_sort(int* arr, int n)
{
    int max_element = 0;
    for(int i = 0 ; i < n ; i++)
    {
        if(max_element < arr[i])
        {
            max_element = arr[i];
        }
    }
    max_element++;
    int* count_arr = (int *)calloc(max_element,sizeof(int));
    for(int i = 0 ; i < n ; i++)
    {
        count_arr[arr[i]]++;
    }
    for(int i = 1 ; i < max_element; i++)
    {
        count_arr[i] = count_arr[i] + count_arr[i-1];
    }
    for(int i = n-1 ; i >= 0 ; i--)
    {
        ans[count_arr[arr[i]] - 1] = arr[i];
        count_arr[arr[i]]--;
    }
    return;
}
