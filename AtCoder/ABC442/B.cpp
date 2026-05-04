#include <iostream>
#include <string>

using namespace std;

#define nl '\n'

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(0);

    // volume = 0 initially
    // music stopped init.
    // a = 1, vol++
    // a = 2, vol-- if vol>=1, else nthng
    // a = 3, !music status
    // is music playing at vol 3 imm. after i-th op.

    int q; cin >> q;
    
    int vol = 0;
    bool music = false;

    while(q--){
        int a; cin >> a;

        if(a == 1) vol++;
        else if(a == 3) music = !music;
        else {
            if(vol > 0 ) {
                vol--;
            }
        }

        if(vol >= 3 && music) cout << "Yes\n";
        else cout << "No\n";

    }


}