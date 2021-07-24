#include<stdio.h>
#define c 299792458.0
int main()
{
    double a, b;
    scanf("%lf %lf", &a, &b);
    printf("%lf\n", (a + b) / (1 + (a * b) / (c * c)));
}
