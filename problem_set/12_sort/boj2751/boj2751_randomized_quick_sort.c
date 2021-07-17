#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void quick_sort(int* arr, int left, int right);
void swap(int* a, int* b);

int main()
{
    int n, num[1000001];
    scanf("%d",&n);
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&num[i]);
    }
    quick_sort(num, 0, n-1);
    for(int i = 0 ; i < n ; i++)
    {
        printf("%d\n",num[i]);
    }
    return 0;
}

void quick_sort(int* arr, int left, int right)
{
    if(left >= right)
    {
        return;
    }
    else
    {
        int num = rand() % (right - left + 1) + left;
        swap(&arr[num],&arr[left]);
        int pivot = left;
        int i = left + 1;
        int j = right;
        while(i <= j)
        {
            while(arr[i] < arr[pivot] && i < right + 1)
            {
                i++;
            }
            while(arr[j] >= arr[pivot] && j > left)
            {
                j--;
            }
            if(j >= i)
            {
                swap(&arr[i],&arr[j]);
            }
        }
        swap(&arr[j],&arr[pivot]);
        quick_sort(arr, left, j);
        quick_sort(arr, i, right);
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
