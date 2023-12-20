#include<bits/stdc++.h>
using namespace std;

int checkScore(double n){
    if(n>10 || n<0)
        return 0;
    return 1;
}

void media (){
    double a, b;

    cin>>a;
    while(1){
        if(checkScore(a))
            break;
        cout<<"nota invalida\n";
        cin>>a;
    }

    cin>>b;
    while(1){
        if(checkScore(b)){
            break;
        }
        cout<<"nota invalida\n";
        cin>>b;
    }

    cout<<fixed<<setprecision(2)<<"media = "<<(a+b)/2.0<<'\n';
}

int main()
{
    media();
    int x, flag = 1;

    while(flag){
        cout<<"novo calculo (1-sim 2-nao)\n";
        cin>>x;
        switch(x){
            case 1:
                media();
                break;
            case 2:
                return 0;
        }
    }

    return 0;
}
