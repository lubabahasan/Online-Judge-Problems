#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;
        long long int a[n], b[n];

        cin>>a[0];
        if(a[0]>1)
            b[0]=1;
        else
            b[0]=a[0]+1;

        for(int i=1;i<n;i++){
            cin>>a[i];
            if(a[i]==(b[i-1]+1))
                b[i]=(b[i-1]+2);
            else
                b[i]=(b[i-1]+1);
        }

        cout<<b[n-1]<<'\n';
    }
    return 0;
}
