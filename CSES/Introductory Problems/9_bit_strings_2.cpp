#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define ll long long

void solve(){
    ll n; cin >> n;
    ll ans = 2;

    for(int i=2; i<=n; i++){
        ans *= 2;
        ans = ans % (1000000007);
    }

    cout << ans << nl;
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