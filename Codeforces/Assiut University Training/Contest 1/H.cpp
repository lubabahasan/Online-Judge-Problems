#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define cin(a) cin >> a
#define ll long long

ll a, b, c, d, i = 0, m = 1, n, k, x, y;
string s, t, u, v;

int main(){
    cin >> n >> k >> a;

    if (n%a==0 || k%a==0 || (n*k)%a==0){
        if((n*k)/a > 2147483647 || (n*k)/a < -2147483648) cout << "long long\n";
        else cout << "int\n";
    } else cout << "double\n";

}




