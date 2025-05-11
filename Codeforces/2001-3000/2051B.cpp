#include<bits/stdc++.h>
#define ll long long int

using namespace std;

bool isOk(ll mid, ll n, ll a, ll b, ll c) {
    ll temp = (a+b+c)*(mid/3);
    if( mid%3 >= 1 ) temp += a;
    if (mid%3 >= 2) temp += b;

    if (temp < n)
        return false;
    else
        return true;
}

void solve() {
    ll n, a, b, c;
    cin >> n >> a >> b >> c;

    ll l=0, r=n, mid;

    while(l<r){
        mid = (l + r)/2;
        if( isOk(mid, n, a, b, c) == 0 ){
            l = mid + 1;
        } else {
            r = mid;
        }
    }

    ll temp = (a+b+c)*(mid/3);
    if( mid%3 >= 1 ) temp += a;
    if (mid%3 >= 2) temp += b;

    if(temp >= n)
        cout << mid << '\n';
    else 
        cout << mid+1 << '\n';

}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
