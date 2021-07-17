#include<stdio.h>
#include<math.h>
int main(){
    int a, b, tmp, ans;
    int sum = 0;
    scanf("%d %d", &a, &b);
    for(int i = 1; i<4 ; i++)
    {
        tmp = b % (int)pow(10,i);
        tmp = tmp / (int)pow(10,i-1);
        ans = a * tmp;
        sum += ans * (int)pow(10,i-1);
        printf("%d\n",ans);
    }
    printf("%d\n",sum);
    return 0;
}
