#include<stdio.h>
int main()
{
    int i;
    double amnt,price[5]={4.00,4.50,5.00,2.00,1.50};
    scanf("%d %lf",&i,&amnt);
    i=i-1;
    printf("Total: R$ %.2lf\n",price[i]*amnt);
    return 0;
}