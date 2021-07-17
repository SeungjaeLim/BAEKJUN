#include<stdio.h>

#define LEFT_CHLD(N) N*2
#define RIGHT_CHLD(N) N*2 + 1
#define PRNT(N) N/2

void heap_sort(int* arr, int n);
void heap_push(int data);
int heap_pop(void);
void swap(int* a, int* b);

int heap[1000001] = {0, };
int heap_count = 0;

int main()
{
    int n, num[1000001];
    scanf("%d",&n);
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&num[i]);
    }
    heap_sort(num, n);
    for(int i = 0 ; i < n ; i++)
    {
        printf("%d\n",num[i]);
    }
    return 0;
}

void heap_sort(int* arr, int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        heap_push(arr[i]);
    }
    for(int i = 0 ; i < n ; i++)
    {
        arr[i] = heap_pop();
    }
    return;
}

void heap_push(int data)
{
    heap_count++;
    heap[heap_count] = data;
    int i = heap_count;
    while(i>1 && heap[PRNT(i)] > heap[i])
    {
        swap(&heap[PRNT(i)],&heap[i]);
        i = PRNT(i);
    }
    return;
}

int heap_pop(void)
{
    int min_num = heap[1];
    heap[1] = heap[heap_count];
    swap(&heap[1], &heap[heap_count]);
    heap_count--;
    int i = 1;
    int tmp;
    while(LEFT_CHLD(i) <= heap_count)
    {
        if(RIGHT_CHLD(i) <=heap_count)
        {
            tmp = heap[RIGHT_CHLD(i)] < heap[LEFT_CHLD(i)] ? RIGHT_CHLD(i) : LEFT_CHLD(i);
            if(heap[tmp] < heap[i])
            {
                swap(&heap[i], &heap[tmp]);
                i = tmp;
            }
            else
            {
                break;
            }
        }
        else
        {
            tmp = LEFT_CHLD(i);
            if(heap[tmp] < heap[i])
            {
                swap(&heap[i], &heap[tmp]);
                i = tmp;
            }
            else
            {
                break;
            }
        }
    }
    return min_num;

}

void swap(int* a, int* b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
    return;
}
