#include<stdio.h>
int main()
{
    int dur,h,m,s;
    scanf("%d",&dur);
    h=dur/3600;
    m=(dur/60)-(60*h);
    s=dur-3600*h-60*m;
    printf("%d:%d:%d\n",h,m,s);
    return 0;
}