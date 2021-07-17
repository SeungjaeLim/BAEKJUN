#include<stdio.h>
#include<algorithm>
using namespace std;

struct oj_member
{
    int age;
    char name[101];
};

bool compare(struct oj_member* a, struct oj_member* b);

int main()
{
    struct oj_member* db[100001];
    int n;
    scanf("%d",&n);
    for(int i = 0 ; i< n ; i++)
    {
        db[i] = (struct oj_member*)malloc(sizeof(struct oj_member));
        scanf("%d %s",&(db[i]->age),db[i]->name);
    }
    stable_sort(db, db+n, compare);
    for(int i = 0 ; i < n ; i++)
    {
        printf("%d %s\n", db[i]->age, db[i]->name);
        free(db[i]);
    }
}

bool compare(struct oj_member* a, struct oj_member* b)
{
    return a->age < b->age;
}
