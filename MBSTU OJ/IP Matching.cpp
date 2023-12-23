#define nl '\n'
#include<bits/stdc++.h>
//22201134 Lubaba Hasan

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string a, b;
        cin>>a;
        int x = stoi(a.substr(0, 3));
        if(x>=0 && x<=127)
            cout<<"A";
        else if(x>=128 && x<=191)
            cout<<"B";
        else if(x>=192 && x<=223)
            cout<<"C";
        else if(x>=224 && x<=239)
            cout<<"D";
        else if(x>=240 && x<=255)
            cout<<"E";
        else
            cout<<"0";
        cout<<nl;

    }
    return 0;
}
