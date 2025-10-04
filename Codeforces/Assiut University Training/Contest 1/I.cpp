#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define cin(a) cin >> a
#define ll long long

ll a, b, c, d, i = 0, m = 1, n, k, x, y;
string s, t, u, v;

int main(){
    cin >> n;

    a = n%10;
    b = n/10;

    if(a%b==0 || b%a==0) cout << "YES\n";
    else cout << "NO\n";
}




