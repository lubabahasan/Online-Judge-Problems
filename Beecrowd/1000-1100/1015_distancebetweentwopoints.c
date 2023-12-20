#include<stdio.h>
#include<math.h>
int main()
{
    double point[2][2], x,y,dist;
    scanf("%lf %lf %lf %lf",&point[0][0],&point[0][1],&point[1][0],&point[1][1]);

    x= pow((point[1][0]-point[0][0]),2);
    y= pow((point[1][1]-point[0][1]),2);
    dist=sqrt(x+y);
    printf("%.4lf\n", dist);

}