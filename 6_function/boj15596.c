long long sum(int *a, int n)
{
    long long sum_of_a = 0;
    for(int i = 0; i < n ; i++)
    {
        sum_of_a = sum_of_a + a[i];
    }
    return sum_of_a;
}
