#include<bits/stdc++.h>
using namespace std;
#define pi 3.141592653
#define nl '\n'
#define cin(a) cin >> a
#define ll long long

ll a, b, c, d;
string s;

int main(){
    cin(a);
    cin(b);
    cin(c);

    cout << min(a, min(b, c)) << " ";
    cout << max(a, max(b, c)) << nl;
}