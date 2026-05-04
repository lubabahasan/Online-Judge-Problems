#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define cin(a) cin >> a
#define ll long long

ll a, b, c, d, i = 0, m = 1, n, x, y;
string s, t, u, v;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){

        cin >> n;

        while(n){
            cout << n%10 << " ";
            n /= 10;
        }
        cout << nl;
    }

}
