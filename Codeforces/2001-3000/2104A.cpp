#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solve(int t) {
    while(t--){
        
        int a, b, c;
        cin >> a >> b >> c;

        if((a+b+c)%3==0){
            int temp = (a+b+c)/3;
            if(a>temp || b>temp){
                cout << "NO\n";
            } else {
                cout << "YES\n";
            }
        } else {
            cout << "NO\n";
        }

    }
}

int main() {
   int t; cin>>t;
   solve(t);
}