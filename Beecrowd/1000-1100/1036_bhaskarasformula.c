#include<stdio.h>
#include<math.h>
int main()
{
    double A,B,C,r1,r2,x;
    scanf("%lf %lf %lf",&A,&B,&C);
    x=(B*B)-(4*A*C);

    if (x>=0 && A>0)
    {
        r1=-B+sqrt(x);
        r2=-B-sqrt(x);
        printf("R1 = %.5lf\nR2 = %.5lf\n",r1/(2*A),r2/(2*A));
    } else
    {
        printf("Impossivel calcular\n");
    }
    return 0;
}


