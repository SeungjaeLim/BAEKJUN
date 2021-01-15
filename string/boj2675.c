#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n;
    char buf[25];
    char* exist_string[1000];
    int t[1000];
    scanf("%d",&n);
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d", &t[i]);
        scanf("%s", &buf);
        char* new_string = (char *)malloc(sizeof(char) * strlen(buf));
        exist_string[i] = new_string;
        strcpy(exist_string[i],buf);
    }
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < strlen(exist_string[i]) ; j++)
        {
            for(int k = 0 ; k < t[i]; k++)
            {
                printf("%c",exist_string[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}
