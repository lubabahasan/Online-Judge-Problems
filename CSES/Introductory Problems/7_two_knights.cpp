#include<bits/stdc++.h>
using namespace std;
#define nl '\n'

void solve(){
    int n, ans = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        ans = ans + i * 256;
        cout << ans << nl;
    }
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