#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define ll long long

void solve(){
    ll n;
    cin >> n;

    vector<int> h(n);
    ll sum = 0;

    for(int i=0; i<n; i++){
        cin >> h[i];
    }

    ll ind = n-1;

    while(1){
        //cout << h[ind] << " " << h[ind-1] << nl;
        if(ind == 0) break;
        if(h[ind-1] < h[ind]){
            ind--;
        } else {
            break;
        }
    }

    if(ind !=0){
        for(int i=ind; i>=0; i--){
            sum += max(0, h[i]-h[ind]+1);
            //cout << h[i]-h[ind] << " ";
        }
        cout << sum - 1 << nl;
    } else {
        cout << sum << nl;
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
