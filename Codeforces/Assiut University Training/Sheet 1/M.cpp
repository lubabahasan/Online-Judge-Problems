#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define cin(a) cin >> a
#define for(a,b,c) for(i=a; i<b; i+=c)
#define ll long long

ll a, b = 0, c, d, i = 0;
string  t, u, v;

int main(){
    char s;
    cin >> s;

    if(s>='0' && s<='9') cout << "IS DIGIT\n";
    else{
        if(s>='a' && s<='z'){
            cout << "ALPHA\nIS SMALL";
        } else {
            cout << "ALPHA\nIS CAPITAL";
        }
    }
}