#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;

bool compare(int a, int b);

int main()
{
    char n[11];
    long long int len;
    scanf("%s",n);
    len = strlen(n);
    sort(n, n+len,compare);
    printf("%s",n);
}

bool compare(int a, int b)
{
    return a>b;
}
