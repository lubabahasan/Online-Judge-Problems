#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int c=n, kc=0;
        while(c--){
         int a;
         cin>>a;
         if(a==k)
            kc++;
        }
        if(kc)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
