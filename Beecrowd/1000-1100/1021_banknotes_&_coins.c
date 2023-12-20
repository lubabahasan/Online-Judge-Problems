#include<stdio.h>
int main()
{
    double Tmoney,coins[6]={100,50,25,10,5,1};
    int coin,i,givenote[6],givecoin[6],notes[6]={100,50,20,10,5,2};
    scanf("%d",&Tmoney);
    int money=(int)Tmoney;
    coin=(Tmoney-money)*100;

    for (i=0;i<7;i++)
    {
        givenote[i]=money/notes[i];
        money=money%notes[i];
    }
    for (i=0;i<7;i++)
    {
        givecoin[i]=(coin/coins[i])/100;
        coin=coin-(coins[i]*givecoin[i]);
    }

    printf("NOTAS:\n");
    for (i=0;i<6;i++)
    {
        printf("%d nota(s) de R$ %d.00\n",givenote[i],notes[i]);
    }
    printf("MOEDAS:\n");
    for (i=0;i<6;i++)
    {
        if (givecoin[i]>=1)
        {
            printf("%d moeda(s) de R$ %.2lf\n",givecoin[i],coins[i]);
        } else
        {
            printf("0 moeda(s) de R$ %.2lf\n",coins[i]);
        }
    }
    
    return 0;
}