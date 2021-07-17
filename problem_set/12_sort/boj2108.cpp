#include<stdio.h>
#include<algorithm>
#include<cmath>

using namespace std;

double cal_avg(int n, int* num);
int cal_mode(int* freq);

int main()
{
    int n, num[500001] = {0, };
    int freq[8001] = {0,};
    int ans[4];
    scanf("%d",&n);
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&num[i]);
        freq[num[i]+4000]++;
    }
    sort(num, num+n);
    ans[0] = (int)round(cal_avg(n, num));
    if(n%2 == 0)
    {
        ans[1] = num[n/2 - 1];
    }
    else
    {
        ans[1] = num[n/2];
    }
    ans[2] = cal_mode(freq);
    ans[3] = num[n-1] - num[0];
    for(int i = 0 ; i < 4 ; i ++)
    {
        printf("%d\n",ans[i]);
    }

}

double cal_avg(int n, int* num)
{
    double sum = 0;
    for (int i = 0 ; i < n ; i++)
    {
        sum = sum + num[i];
    }
    return sum / n;
}

int cal_mode(int* freq)
{
    int max_freq = 0;
    int mode_cnt = 0;
    int idx = 0;
    int mode_ans[8001] = {-4001, -4001,};
    for(int i = 0 ; i < 8001 ; i++)
    {
        if(max_freq < freq[i])
        {
            max_freq = freq[i];
        }
    }
    for(int i = 0 ; i < 8001 ; i++)
    {
        if(max_freq == freq[i])
        {
            mode_ans[mode_cnt] = i- 4000;
            mode_cnt++;
        }
    }
    if(mode_ans[1] != -4001)
    {
        return mode_ans[1];
    }
    else
    {
        return mode_ans[0];
    }
}



