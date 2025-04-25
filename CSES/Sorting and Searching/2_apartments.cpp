#include<bits/stdc++.h>
using namespace std;
#define nl '\n'

void solve(){
    int n, m;
    long long int k;
    cin >> n >> m >> k;

    long long int appc[n], apt[m];

    for( int i = 0; i < n; i++){
        cin >> appc[i];
    }

    for( int i = 0; i < m; i++){
        cin >> apt[i];
    }

    sort(appc, appc + n);
    sort(apt, apt + m);

    int i=
    while( i<m && j<n)

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
}