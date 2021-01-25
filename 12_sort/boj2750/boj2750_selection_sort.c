#include<stdio.h>

void selection_sort(int* arr, int n);
void swap(int* a, int* b);

int main()
{
    int n, num[1001];
    scanf("%d",&n);
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&num[i]);
    }
    selection_sort(num, n);
    for(int i = 0 ; i < n ; i++)
    {
        printf("%d\n",num[i]);
    }
    return 0;
}

void selection_sort(int* arr, int n)
{
    int tmp = -1000000;
    int idx;
    for(int i = n - 1 ; i >= 0 ; i--)
    {
        for(int j = 0 ; j <= i ; j++)
        {
            if(tmp < arr[j])
            {
                tmp = arr[j];
                idx = j;
            }
        }
        swap(&arr[idx], &arr[i]);
        tmp = -1000000;
    }
    return;
}

void swap(int* a, int* b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
    return;
}
