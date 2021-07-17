#include<stdio.h>
#include<math.h>
int main()
{
    int input[10000][2][3];
    int t;
    float distance, sum_radius, diff_radius, max_radius, min_radius;
    scanf("%d",&t);
    for(int i = 0 ; i < t ; i++)
    {
        scanf("%d %d %d %d %d %d",&input[i][0][0],&input[i][0][1],&input[i][0][2],&input[i][1][0],&input[i][1][1],&input[i][1][2]);
    }
    for( int i = 0 ; i < t ; i++)
    {
        if(input[i][0][2] > input[i][1][2])
        {
            max_radius = input[i][0][2];
            min_radius = input[i][1][2];
        }
        else
        {
            max_radius = input[i][1][2];
            min_radius = input[i][0][2];
        }
        distance = sqrt(pow(input[i][0][0] - input[i][1][0],2) + pow(input[i][0][1] - input[i][1][1],2));
        sum_radius = input[i][0][2] + input[i][1][2];
        diff_radius = max_radius - min_radius;
        if(distance == 0 && diff_radius == 0)
        {
            printf("-1\n");
        }
        else if(sum_radius < distance)
        {
            printf("0\n");
        }
        else if(sum_radius == distance)
        {
            printf("1\n");
        }
        else if(sum_radius > distance && diff_radius < distance)
        {
            printf("2\n");
        }
        else if( diff_radius == distance )
        {
            printf("1\n");
        }
        else if(diff_radius > distance)
        {
            printf("0\n");
        }
    }
    return 0;
}
