#include <iostream>
#include <string>

using namespace std;

#define nl '\n'

int main(){
    // if i or j, 1 dot, else 0 dots

    string s; cin >> s;

    int c = 0;

    for(int i=0; i<s.length(); i++){
        if(s[i]=='i' || s[i]=='j') c++;
    }

    cout << c << nl;

}