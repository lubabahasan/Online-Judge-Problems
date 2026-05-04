#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define ll long long

void solve(){
    ll sz;
    cin >> sz;

    string s;
    cin >> s;

    ll left=0, right=0;

    for(int i=0; i<sz; i++){
        if(s[i] == '(') left++;
        else right++;
    }

    if(left==right) cout << "YES\n";
    else cout << "NO\n";
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
