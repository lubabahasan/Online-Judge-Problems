#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define ll long long

void solve(int n){
    for(int i = 1; i <= n; i+=2){
        cout << i << " ";
    }

    if(n%2) {
        for(int i = 2; i <= n; i+=2){
            cout << i << " ";
        }
    } else {
        for(int i = n; i > 0; i-=2){
            cout << i << " ";
        }
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int t = 1;
    //cin >> t;

    int n; cin >> n;

    if(n == 2 || n == 3) cout << "NO SOLUTION\n";
    else {
        solve(n);
    }
}