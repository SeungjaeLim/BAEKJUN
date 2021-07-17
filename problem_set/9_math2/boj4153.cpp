#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
    int input[10000][3];
    int i = 0 ;
    do
    {
        scanf("%d %d %d",&input[i][0], &input[i][1], &input[i][2]);
        i++;
    }while(input[i-1][0] != 0);

    for(int j = 0 ; j < i - 1 ; j++)
    {
        sort(input[j], input[j]+3);
    }
    for(int j = 0 ; j < i - 1 ; j++)
    {
        if( input[j][0] * input[j][0] + input[j][1] * input[j][1] == input[j][2] * input[j][2] )
        {
            printf("right\n");
        }
        else
        {
            printf("wrong\n");
        }
    }
}
