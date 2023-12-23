#define nl '\n'
#include<bits/stdc++.h>
//22201134 Lubaba Hasan

using namespace std;

divisor(int n){
    int prime[n+1] = {1};
    for(int i=2; i*i<n; i++){
        if(prime[i]){
            for(int j=i*2; j<n; j+=i)
                prime[j]=0;
        }
    }

    int t=1;
    for(int i=2; i<=n; i++){
        if(prime[i]){
            int c=0;
            if(n%i==0){
                while(n%i==0){
                    n/=i;
                    c++;
                }
                t=t*(c+1);
            }
        }
    }
    return t;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long m;
        cin>>m;
        cout<<divisor(m);
    }
    return 0;
}
