#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float x,y;
    int t;
    cin>>t;
    while(t--){
        cin>>x>>y;
        if(y==0)
            cout<<"divisao impossivel\n";
        else
            cout<<fixed<<setprecision(1)<<x/y<<'\n';
    }

    return 0;
}


