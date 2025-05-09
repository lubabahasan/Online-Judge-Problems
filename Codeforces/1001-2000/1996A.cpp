#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    if(n%4==0){
        cout << n/4 << '\n';
    } else {
        int count = n/4;
        n = n%4;
        count += n/2;
        cout << count << '\n';
    }
}

int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}