#define nl '\n'
#include<bits/stdc++.h>
//22201134 Lubaba Hasan

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,r,c;
        cin>>x>>y>>r>>c;
        if(r-x==x-y || r-x==y-c)
                cout<<"1";
        else
            cout<<"0";
        cout<<nl;
    }
    return 0;
}
