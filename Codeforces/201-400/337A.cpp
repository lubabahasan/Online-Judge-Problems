#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define ll long long

void solve(){
    ll n, m; cin >> n >> m;

    vector<int> q(m);

    for(int i = 0; i < m; i++){
        cin >> q[i];
    }

    sort(q.begin(), q.end());

    int diff = q[n-1] - q[0];

    for(int i = 1; (i+n-1) < m; i++){
        diff = min(diff, q[i+n-1] - q[i]);
    }

    cout << diff << nl;
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
