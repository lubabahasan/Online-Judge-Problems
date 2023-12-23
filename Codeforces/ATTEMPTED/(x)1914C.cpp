//Lubaba Hasan UAP
#define nl '\n'

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n, k; cin>>n; cin>>k;
        int a[n], b[n];

        cin>>a[0];
        int temp=a[0];
        for(int i=1; i<n; i++){
            cin>>a[i];
            a[i]+=temp;
            temp=a[i];
        }
        for(int i=0; i<n; i++)
            cin>>b[i];

        vector<int>sum;
        for(int i=0; i<n; i++){
            int temp = a[i] + (b[i]*(k-i-1));
            sum.push_back(temp);
        }

        for(auto i=sum.begin(); i!=sum.end(); i++)
            cout<<*i<<" ";

        for(int i=0; i<n; i++){
            for(int j=0; j<n ;j++){

            }
        }
        cout<<nl;
    }
}

