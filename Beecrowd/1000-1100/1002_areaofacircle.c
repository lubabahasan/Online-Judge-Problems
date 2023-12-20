#include<stdio.h>
int main(){
    double R, pi=3.14159;
    scanf("%lf", &R);
    double A=pi*(R*R);
    printf("A=%.4lf\n", A);
    return 0;
}