//8:58

#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define cin(a) cin >> a
#define ll long long

ll a, b, c, d, i = 0, m = 1, x, y;
string s, t, u, v;

int main(){
    
    ll k;
    cin >> a >> b >> k;

    if(a%k==0 && b%k==0) cout << "Both\n";
    else if(a%k==0 && b%k!=0) cout << "Memo\n";
    else if(a%k!=0 && b%k==0) cout << "Momo\n";
    else cout << "No One\n";


}