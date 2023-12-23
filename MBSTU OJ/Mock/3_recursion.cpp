#include <bits/stdc++.h>
using namespace std;
long long num;

void dig(){
    if ( num == 0 )return;
    cout << num%10 << " ";
    num/=10;
    dig();
}

void solve(){
    cin >> num;
    if ( num == 0 ) cout << 0 <<" ";
    else dig();
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}
