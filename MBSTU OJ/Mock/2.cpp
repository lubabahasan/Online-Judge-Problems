#define nl '\n'
#include<bits/stdc++.h>
//22201134 Lubaba Hasan

using namespace std;

int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        n=(n*(2+(n-1))/2);
        cout<<n<<nl;
    }
    return 0;
}
