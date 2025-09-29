#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define cin(a) cin >> a
#define for(a,b,c) for(i=a; i<b; i+=c)
#define ll long long

ll a, b = 0, c, d, i = 0;
string s, t, u, v;

int main(){
    cin(a);
    cin(b);
    cin(c);

    d = a + b + c;

    cout << min(a, min(b, c)) << nl << d - min(a, min(b, c)) - max(a, max(b, c)) << nl << max(a, max(b, c)) << nl << nl;

    cout << a << nl << b << nl << c;
}