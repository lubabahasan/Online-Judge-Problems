#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define cin(a) cin >> a
#define ll long long

ll a, b, c, d, i = 0, m = 1, x, y;
string s, t, u, v;

int main(){

   cin >> a >> b;

   if(abs(a-b)==1) cout << "YES";
   else if(abs(a-b)==0 && a>0 && b>0) cout << "YES";
   else cout << "NO";

}
