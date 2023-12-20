#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=int(a); i<int(b); i++)
#define per(i,a,b) for(int i=int(b)-1; i>=int(a); i--)
#define nl '\n'

using namespace std;

int main()
{
    int n;
    int alc=0;
    int gas=0;
    int dies=0;


    while(1){
        cin>>n;
        switch(n){
            case 1:
                alc++;
                break;
            case 2:
                gas++;
                break;
            case 3:
                dies++;
                break;
            case 4:
                cout<<"MUITO OBRIGADO\n";
                cout<<"Alcool: "<<alc<<"\nGasolina: "<<gas<<"\nDiesel: "<<dies<<nl;
                return 0;
            default:
                break;
        }
    }

}


