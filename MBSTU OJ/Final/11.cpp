#define nl '\n'
#include<bits/stdc++.h>
//22201134 Lubaba Hasan

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long int num[n];
        for(long long int i=0; i<n; i++)
            cin>>num[i];
        sort(num, num+n);
        for(long long int i=0; i<n; i++)
            cout<<num[i]<<" ";
        cout<<nl;
    }
    return 0;
}
