#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int num;
    int n=5,ce=0,co=0,cp=0,cn=0;
    while(n)
    {
        cin>>num;
        if(num>0)
            cp++;
        if(num<0)
            cn++;
        if(num%2==0)
            ce++;
        else
            co++;
        n--;
    }
    cout<<ce<<" valor(es) par(es)\n"<<co<<" valor(es) impar(es)\n"<<cp<<" valor(es) positivo(s)\n"<<cn<<" valor(es) negativo(s)\n";
    return 0;
}

