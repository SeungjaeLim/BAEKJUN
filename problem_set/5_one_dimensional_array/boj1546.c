#include<stdio.h>
int main()
{
    int max_score = 0;
    float avg = 0;
    int subject_cnt;
    float subject_score[1000];
    scanf("%d",&subject_cnt);
    for(int i = 0; i < subject_cnt; i++)
    {
        scanf("%f",&subject_score[i]);
        if(subject_score[i]>max_score)
        {
            max_score = subject_score[i];
        }
    }
    for(int i = 0; i< subject_cnt; i++)
    {
        subject_score[i] = subject_score[i] / max_score * 100;
        avg = avg + subject_score[i];
    }
    printf("%f",avg/subject_cnt);
}
