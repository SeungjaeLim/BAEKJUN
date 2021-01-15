#include<stdio.h>
#include<stdlib.h>
void read_reverse(char* num);
int main()
{
    char a[4],b[4];
    int rev_a, rev_b;
    scanf("%s %s",&a,&b);
    read_reverse(a);
    read_reverse(b);
    rev_a = atoi(a);
    rev_b = atoi(b);
    if(rev_a > rev_b)
    {
        printf("%d",rev_a);
    }
    else
    {
        printf("%d",rev_b);
    }
    return 0;
}
void read_reverse(char* num)
{
    char tmp;
    tmp = num[0];
    num[0] = num[2];
    num[2] = tmp;
    return;
}
