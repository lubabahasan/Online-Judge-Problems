#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define ll long long

void solve(){
    ll a, b; cin >> a >> b;

    if(a%2 && b%2) cout << "NO\n";
    else if((a%2 && b%2==1) || (a%2==1 && b%2)) cout <<"NO\n";
    else cout << "YES\n";
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
