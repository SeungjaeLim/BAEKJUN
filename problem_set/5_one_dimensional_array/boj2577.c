#include<stdio.h>
int main()
{
    int a,b,c;
    long long int n;
    int num_count[10] = {0, };
    scanf("%d %d %d",&a,&b,&c);
    n = a*b*c;
    while(n>0)
    {
        num_count[n%10]++;
        n = n/10;
    }
    for(int i = 0; i<10; i++)
    {
        printf("%d\n",num_count[i]);
    }
    return 0;
}
