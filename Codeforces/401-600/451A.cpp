#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define ll long long

void solve(){
    ll n; cin >> n;

    if( (n & (n-1)) == 0){
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}
