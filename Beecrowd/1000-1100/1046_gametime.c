#include<stdio.h>
int main()
{
    int start,end,dur;
    scanf("%d %d",&start,&end);
    dur=end-start;

    if (dur<=0)
    {
        dur=(24-start)+end;
        printf("O JOGO DUROU %d HORA(S)\n",dur);
    } else
    {
        printf("O JOGO DUROU %d HORA(S)\n",dur);
    }

    return 0;
}