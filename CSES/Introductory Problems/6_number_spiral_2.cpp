#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define ll long long

void solve(ll x, ll y){

    // x->odd ? decrease from x*x
    // x->even ? increase from ((x-1)*(x-1)) + 1

    // y->odd ? increase from ((y-1)*(y-1)) + 1
    // y->even ? decrease from y*y

    // x <= y ? choose y and vice-versa
    
    
    if ( x >= y ) {
        if ( x % 2 == 0 )
            cout << (x-1)*(x-1) + y;
        else 
            cout << x*x - y + 1;
    } else {
        if ( y % 2 == 0 )
            cout << y*y - x + 1;
        else
            cout << (y-1)*(y-1) + x;
    }

    cout << nl;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int t = 1;
    cin >> t;

    while(t--){
        ll y, x;
        cin >> y >> x;

        solve(x, y);
    }
}