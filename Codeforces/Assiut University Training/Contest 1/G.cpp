#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define cin(a) cin >> a
#define ll long long

ll a, b, c, d, i = 0, m = 1, n, x, y;
string s, t, u, v;

int main(){

    ll k;
    cin >> n >> m >> k;

    if(n==0 || k==0) cout << 0 << nl;
    else if(m==0) cout << min(n/2, k) << nl;
    else {

        ll ans;
        ll c1 = min(n/2, k), c2 = min(n/2, min(m, k)), c3 = min(n, min(m, k));

        ans = max(c2, c3);

        if(ans==c3){
            n -= c3;
            k -= c3;
        } else {
            n -= c2*2;
            k -= c2;
        }

        c1 = min(n/2, k);
        ans += c1;

        cout << ans << nl;

        //cout << c1 << " " << c2 << " " << c3;

    }
}
