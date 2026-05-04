#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'

//recursive approach
void solve(ll n){
    
    cout << n << " ";
    if(n==1) return;
    
    if(n%2){
        n *= 3;
        n++;
    } else n /= 2;

    solve(n);
}

int main(){

    cin.tie(0);
    ios::sync_with_stdio(false);

    int t = 1;
    //cin >> t;

    while(t--){

        ll n;
        cin >> n;

        solve(n);
    }
}



