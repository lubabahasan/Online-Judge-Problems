#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double num;
    cin>>num;
    int notas=int(num);
    int moedas=(num-notas)*100;
    int notes[] = {100,50,20,10,5,2}, coins[] = {100,50,25,10,5,1};
    float coins2[] = {1.00,0.50,0.25,0.10,0.05,0.01};
    int coin[6], bills[6];

    for(int i=0; i<6; i++)
    {

        bills[i]=notas/notes[i];
        notas = notas%notes[i];

    }

    moedas+=notas*100;

    for(int i=0; i<6; i++)
    {
        coin[i]=moedas/coins[i];
        moedas = moedas%coins[i];
    }

    cout.precision(2);

    cout<<"NOTAS:"<<'\n';
    for(int i=0; i<6; i++)
        cout<<bills[i]<<" nota(s) de R$ "<<notes[i]<<".00"<<'\n';
    cout<<"MOEDAS:"<<'\n';
    for(int i=0; i<6; i++)
        cout<<coin[i]<<" moeda(s) de R$ "<<fixed<<coins2[i]<<'\n';

}
