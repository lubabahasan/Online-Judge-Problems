#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define cin(a) cin >> a
#define for(a,b,c) for(i=a; i<b; i+=c)
#define ll long long

ll a, b = 0, c, d, i = 0, m = 1;
string s, t, u, v;

int main(){
    cin >> a >> s >> b;

    if(s==">" && a>b) cout << "Right";
    else if(s==">" && a<b) cout << "Wrong";
    else if(s=="<" && a<b) cout << "Right";
    else cout <<  "Wrong";



}