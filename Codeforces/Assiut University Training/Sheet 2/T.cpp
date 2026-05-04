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

    cin >> n;

    for(i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j+i < n-1) cout << ' ';
            else cout << '*';
        }

        for(int j=1; j<n; j++){
            if(j<=i) cout << '*';
        }

        if(i!=n-1) cout << nl;
    }

}
