#include<stdio.h>
int main()
{
    double hours, avgS;
    scanf("%lf %lf", &hours,&avgS);
    printf("%.3lf\n",(hours*avgS)/12);
    return 0;
}

