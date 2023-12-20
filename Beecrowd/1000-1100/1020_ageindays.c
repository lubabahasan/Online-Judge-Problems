#include<stdio.h>
int main()
{
    int age,d,m,y;
    scanf("%d",&age);
    y=age/365;
    m=(age-365*y)/30;
    d=age-365*y-30*m;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",y,m,d);
    return 0;
}