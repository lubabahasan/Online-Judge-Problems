//8:58

#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define cin(a) cin >> a
#define ll long long

ll a, b, c, d, i = 0, m = 1, x, y;
string s, t, u, v;

int main(){
    
    cin >> a >> b >> c >> d;
   
    if (a+b-c==d || a+b*c==d || a*b-c==d || a*b+c==d || a-b+c==d || a-b*c==d){
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }


}