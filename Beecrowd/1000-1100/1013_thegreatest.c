#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,ab,cx;
    scanf("%d %d %d", &a,&b,&c);
    ab=(a+b+abs(a-b))/2;
    cx=(c+ab+abs(c-ab))/2;
    if (cx>ab)
    {
        printf("%d eh o maior\n",cx);

    } else 
    {
        printf("%d eh o maior\n",ab);

    }
    return 0;
}