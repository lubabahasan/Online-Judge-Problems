#include<stdio.h>
int main()
{
    int i, Tmoney, give[7], note[7]={100,50,20,10,5,2,1};
    scanf("%d", &Tmoney);
    printf("%d\n",Tmoney);
    
    for (i=0; i<7; i++)
    {
        give[i]=Tmoney/note[i];
        Tmoney=Tmoney%note[i];
    }
    for (i=0; i<7; i++)
    {
        printf("%d nota(s) de R$ %d,00\n",give[i],note[i]);
    }

    return 0;
}
