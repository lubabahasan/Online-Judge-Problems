#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define cin(a) cin >> a
#define for(a,b,c) for(i=a; i<b; i+=c)
#define ll long long

ll a, b = 0, c, d, i = 0;
string s, t, u, v;

int main(){
    cin(s);

    a = int(s[0])-int('0');

    a%2==0 ? cout << "EVEN" : cout << "ODD";
}