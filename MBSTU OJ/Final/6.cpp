#include<iostream>
//22201134 Lubaba Hasan
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n)
            cout<<1+(n/3)<<'\n';
        else
            cout<<0<<'\n';
    }
    return 0;
}
