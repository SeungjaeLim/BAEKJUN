#include<stdio.h>

void insertion_sort(int* arr, int n);
void swap(int* a, int* b);

int main()
{
    int n, num[1001];
    scanf("%d",&n);
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&num[i]);
    }
    insertion_sort(num, n);
    for(int i = 0 ; i < n ; i++)
    {
        printf("%d\n",num[i]);
    }
    return 0;
}

void insertion_sort(int* arr, int n)
{
    int idx;
    for(int i = 1 ; i < n ; i++)
    {
        for(int j = i - 1 ; j >= 0 ; j--)
        {
            if(arr[j] > arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);
            }

        }

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
