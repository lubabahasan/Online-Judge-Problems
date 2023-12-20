#include<stdio.h>
int main()
{
    char name[20];
    double salary, totalsale;
    scanf("%s %lf %lf", name,&salary,&totalsale);
    printf("TOTAL = R$ %.2lf\n", salary+(.15*totalsale));
    return 0;
}