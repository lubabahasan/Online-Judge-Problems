#include<stdio.h>

int main()
{
    double X,Y;
    scanf("%lf %lf", &X,&Y);
    printf("%.3lf km/l\n", X/Y);
    return 0;
}