#include<stdio.h>
int main()
{
    float a,b,c,d,avg,exm;
    scanf("%f %f %f %f",&a,&b,&c,&d);
    avg=((2*a)+(3*b)+(4*c)+d)/10;
    printf("Media: %.1f\n",avg);

    if (avg>=7.0)
    {
        printf("Aluno aprovado.\n");
    } else if (avg<5.0)
    {
        printf("Aluno reprovado.\n");
    } else if (avg>=5.0 && avg<=6.9)
    {
        printf("Aluno em exame.\n");
        scanf("%f",&exm);
        printf("Nota do exame: %.1f\n",exm);
        avg=(avg+exm)/2;
        if (avg>=5.0)
        {
            printf("Aluno aprovado.\nMedia final: %.1f\n",avg);
        } else
        {
            printf("Aluno reprovado.\nMedia final: %.1f\n",avg);
        }
    }

    return 0;
}