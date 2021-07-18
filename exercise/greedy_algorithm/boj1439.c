#include<stdio.h>
int main()
{
    int tmp, prev = 0, cnt_0= 0, cnt_1 = 0;
    while((tmp = getchar()) != EOF)
    {
        if(prev != tmp)
        {
            if(tmp == '0')
                cnt_0++;
            if(tmp == '1')
                cnt_1++;
        }
        prev = tmp;

    }
    printf("%d", cnt_0 > cnt_1 ? cnt_1 : cnt_0);
    return 0;
}