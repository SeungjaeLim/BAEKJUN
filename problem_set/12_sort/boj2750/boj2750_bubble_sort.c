#include<stdio.h>

void bubble_sort(int* arr, int n);
void swap(int* a, int* b);

int main()
{
    int n, num[1001];
    scanf("%d",&n);
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&num[i]);
    }
    bubble_sort(num, n);
    for(int i = 0 ; i < n ; i++)
    {
        printf("%d\n",num[i]);
    }
    return 0;
}

void bubble_sort(int* arr, int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n -i -1 ; j++)
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
