#include<bits/stdc++.h>
#define ll long long int

using namespace std;

bool isOk(ll mid, ll min, ll mx) {
    ll right = min + ((mid-1) * (mid))/2;

    if( right < mx){
        return 0;
    } else {
        return 1;
    }
}

void solve() {
    ll min, mx;
    cin >> min >> mx;

    ll l=1, r=mx, mid;


    while (l<r){
        mid = (l + r) / 2;
        if( isOk(mid, min, mx) == 0 ){
            l = mid + 1;
        } else {
            r = mid;
        }
    }

    ll right1 = min + ((mid-2) * (mid-1))/2;
    ll right = min + ((mid-1) * (mid))/2;
    ll right2 = min + ((mid) * (mid+1))/2;
    
    cout << mid << '\n';

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
