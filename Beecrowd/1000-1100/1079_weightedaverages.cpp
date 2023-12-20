#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        float a,b,c;
        cin>>a>>b>>c;
        cout<<fixed<<setprecision(1)<<(a*2+b*3+c*5)/10<<'\n';
    }
}
