#include<bits/stdc++.h>
using namespace std;
#define nl '\n'

void solve(){
    int n, x;
    cin >> n >> x;

    map<long long int, int> mp;

    long long int weight[n];

    for( int i = 0; i < n; i++){
        cin >> weight[i];
        mp[weight[i]] += 1;
    }

    int count = 0;
    
    for( auto i = mp.begin(); i != mp.end(); i++){
        if(mp.find(x-(i->first)) != mp.end()){
            //cout << i->first << " " << i->second << "," << x-(i->first) << " " << mp[x-(i->first)] << nl;

            int other = x-(i->first);

            int temp = min(i->second, mp[other]);
            count += temp;

            mp[i->first] -= temp;
            mp[other] -= temp;
        }
        if(i->second > 0) {
            count += i->second;
        }
    }

    cout << count << nl;
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