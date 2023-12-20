#include<stdio.h>
int main()
{
    double num,set[6] = {0,25,50,75,100};
    int i;
    int x=69;
    scanf("%lf",&num);

    if(num>=0 && num<=100)
    {   
        for (i=0;i<5 && i!=69; i++)
        {
            if (num>=0 && num<=25)
            {
                printf("Intervalo [0,25]\n");
                i=69;
            } else if (num>set[i] && num<=set[i+1])
            {
                printf("Intervalo (%.0lf,%.0lf]\n",set[i],set[i+1]);
                i=69;
            }
        }
    } else
    {
        printf("Fora de intervalo\n");
    }
    return 0;
}

