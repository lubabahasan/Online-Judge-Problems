#define nl '\n';
#include<bits/stdc++.h>

using namespace std;

int main(){
    int x, y;
    cin>>x>>y;
    int c=0;
    for(int i=1; i<=y; i++){
        cout<<i;
        c++;
        if(c==x){
            cout<<nl;
            c=0;
        } else
            cout<<" ";
    }
    return 0;
}
