#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define ll long long

void solve(){
    ll n; cin >> n;

    ll mx = 1;

    ll prev;
    cin >> prev;
    n--;

    ll cnt = 1;

    while(n--){
        ll temp; cin >> temp;
        if( temp >= prev){
            cnt++;
            mx = max(mx, cnt);
        } else {
            cnt = 1;
        }

        prev = temp;
    }

    cout << mx << nl;
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
