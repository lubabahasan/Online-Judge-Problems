#include<iostream>
using namespace std;
int main()
{
    double A,B,C,mx,mid,mn;
    cin>>A>>B>>C;
    mx = max(max(A,B),C);
    mn = min(min(A,B),C);
    mid = A+B+C - mx - mn;

    if (mx>=mid+mn)
        printf("NAO FORMA TRIANGULO\n");
    else{
        if ((mx*mx)==(mid*mid)+(mn*mn))
            printf("TRIANGULO RETANGULO\n");
        if ((mx*mx)>(mid*mid)+(mn*mn))
            printf("TRIANGULO OBTUSANGULO\n");
        if ((mx*mx)<(mn*mn)+(mid*mid))
            printf("TRIANGULO ACUTANGULO\n");
        if (!(3.0*mx-mx-mid-mn))
            printf("TRIANGULO EQUILATERO\n");
        else if((abs(mx-mn)<1e-9) || (abs(mx-mid)<1e-9) || (abs(mid-mn)<1e-9))
            printf("TRIANGULO ISOSCELES\n");

    }
    return 0;

}

