//Lubaba Hasan UAP
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        long long arr[n],num;
        cin>>arr[0];
        for(int i=1; i<n; i++){
            cin>>num;
            arr[i]=arr[i-1]+num;
        }

        while(q--){
            long l,r,k;
            cin>>l>>r>>k;
            long long num = (r-l+1)*k;

            if(l==1 && r!=n)
                num += arr[n-1]-arr[r-1];
            else if(l!=1 && r==n)
                num += arr[l-2];
            else if(l==1 && r==n)
                num+=0;
            else
                num += arr[l-2]+arr[n-1]-arr[r-1];

            if(num%2==0)
                cout<<"NO\n";
            else
                cout<<"YES\n";
        }

    }
    return 0;
}


