#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int t, animals[3] = {0};
    float total=0;
    cin>>t;
    while(t--){
        int a;
        char ani;
        cin>>a>>ani;
        if(ani=='C')
            animals[0]+=a;
        else if(ani=='R')
            animals[1]+=a;
        else
            animals[2]+=a;
        total+=a;
    }
    cout<<"Total: "<<total<<" cobaias\nTotal de coelhos: "<<animals[0]<<"\nTotal de ratos: "<<animals[1]<<"\nTotal de sapos: "<<animals[2];
    cout<<"\nPercentual de coelhos: "<<fixed<<setprecision(2)<<(animals[0]/total)*100<<" %\n";
    cout<<"Percentual de ratos: "<<fixed<<setprecision(2)<<(animals[1]/total)*100<<" %\n";
    cout<<"Percentual de sapos: "<<fixed<<setprecision(2)<<(animals[2]/total)*100<<" %\n";
    return 0;
}

