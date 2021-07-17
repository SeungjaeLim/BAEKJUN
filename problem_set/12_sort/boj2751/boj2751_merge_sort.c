#include<stdio.h>

void merge_sort(int* arr, int left, int right);
void merge(int* arr, int left, int mid, int right);
void swap(int* a, int* b);

int main()
{
    int n, num[1000001];
    scanf("%d",&n);
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&num[i]);
    }
    merge_sort(num, 0, n-1);
    for(int i = 0 ; i < n ; i++)
    {
        printf("%d\n",num[i]);
    }
    return 0;
}

void merge(int* arr, int left, int mid, int right)
{
    int sorted[1000001];
    int i, j ,k;
    i = left;
    j = mid +1;
    k = left;
    while(i<mid+1 && j < right+1)
    {
        if(arr[i] < arr[j])
        {
            sorted[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            sorted[k] = arr[j];
            j++;
            k++;
        }
    }
    if(i >= mid+1)
    {
        for(int q = j; q < right+1 ; q++)
        {
            sorted[k] = arr[q];
            k++;
        }
    }
    else
    {
        for(int q = i; q < mid+1 ; q++)
        {
            sorted[k] = arr[q];
            k++;
        }
    }
    for(int q = left ; q < right+1 ; q++)
    {
        arr[q] = sorted[q];
    }
    return;
}

void merge_sort(int* arr, int left, int right)
{
    int mid = (left+right)/2;
    if(left<right)
    {
        merge_sort(arr, left, mid);
        merge_sort(arr, mid+1, right);
        merge(arr,left,mid,right);
    }
    return;
}
