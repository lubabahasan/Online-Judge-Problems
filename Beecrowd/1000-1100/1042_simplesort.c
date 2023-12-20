#include<stdio.h>
int main()
{
    int a,b,c,x,y;
    scanf("%d %d %d",&a,&b,&c);
    if (a>b)
    {
         x=a,y=b;
    } else
    {
        x=b,y=a;
    }

    if (x>c&&y>c)
    {
        printf("%d\n%d\n%d\n",c,y,x);
    } else if (x>c&&c>y)
    {
      printf("%d\n%d\n%d\n",y,c,x);
    } else
    {
        printf("%d\n%d\n%d\n",y,x,c);
    }

    printf("\n%d\n%d\n%d\n",a,b,c);
    return 0;
}