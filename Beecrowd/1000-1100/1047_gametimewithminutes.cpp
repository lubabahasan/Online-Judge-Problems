#include<iostream>
using namespace std;

int main()
{
    int h1, m1, h2, m2, dur;
    cin>>h1>>m1>>h2>>m2;
    m1+=h1*60;
    m2+=h2*60;
    if(m2<=m1)
        dur = 1440-m1+m2;
    else
        dur = m2-m1;
    cout<<"O JOGO DUROU "<<dur/60<<" HORA(S) E "<<dur%60<<" MINUTO(S)"<<'\n';
    return 0;
}
