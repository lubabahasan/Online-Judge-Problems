#include<stdio.h>
int main()
{
     double prod[2][3] = {
        {1, 3, 5},
        {0, 2, 8},
    };

    scanf("%lf %lf %lf %lf %lf %lf",&prod[0][0],&prod[0][1],&prod[0][2],&prod[1][0],&prod[1][1],&prod[1][2]);

    printf("VALOR A PAGAR: R$ %.2lf",(prod[0][1]*prod[0][2])+(prod[1][1]*prod[1][2]));

    return 0;
}