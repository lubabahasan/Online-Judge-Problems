#include<bits/stdc++.h>
using namespace std;
#define nl '\n'

void solve(){
    string s;
    cin >> s;

    string w = "WUB";
    string sentence = "";

    for (int i = 0; i < s.size(); i++){
        if (s.substr(i, 3) == w){
            i += 2;
        } else {
            while(1){
                if (i + 2 >= s.size()){
                    sentence += s.substr(i, s.size() - i);
                    i += (s.size() - i);
                    break;
                }
                if (s.substr(i, 3) == w) {
                    sentence += " ";
                    i--;
                    break;
                } else {
                    sentence += s[i];
                    i++;
                }
            }

        }

    }

    cout << sentence << nl;


}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
}
