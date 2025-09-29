#include<bits/stdc++.h>
using namespace std;
#define pi 3.141592653
#define nl '\n'
#define cin(a) cin >> a
#define ll long long

ll b, c, d;
double a;
string s;

int main(){
    cin(a);
    cin(b);

    ll round;

    (((a/b) - int(a/b)) >= 0.5) ? round = ceil(a/b) : round = floor(a/b); 

    cout << "floor " << int(a) << " / " << b << " = " << floor(a/b) << nl;
    cout << "ceil " << int(a) << " / " << b << " = " << ceil(a/b) << nl;
    cout << "round " << int(a) << " / " << b << " = " << round;
}