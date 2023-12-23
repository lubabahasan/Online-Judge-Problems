//Lubaba Hasan UAP
#define nl '\n'

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n, k; cin>>n; cin>>k;
        int arr[n];
        for(int i=0; i<n; i++)
            arr[i]=i+1;

        for(int i=0; i<k; i++)
            cout<<arr[i]<<" ";
        for(int i=n-1; i>=k; i--)
            cout<<arr[i]<<" ";
        cout<<nl;
    }
}
