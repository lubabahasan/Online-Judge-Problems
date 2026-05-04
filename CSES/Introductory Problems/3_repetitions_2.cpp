#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define ll long long

//same approach, less code
int solve(string s){
    int cnt = 1;
    int mx = 1;

    for(int i = 0; i < s.length()-1; i++){
        if(s[i] == s[i+1]){
            cnt++;
        } else {
            mx = max(mx, cnt);
            cnt = 1;
        }
    }

    return mx;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s;
    cin >> s;

    int t = 1;
    //cin >> t;

    while(t--){
        cout << solve(s) << nl;
    }
}