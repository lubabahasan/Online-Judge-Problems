#include<bits/stdc++.h>
using namespace std;
#define nl '\n'

void solve(){
    int n;
    cin >> n;

    long long int x = pow(2, n);

    bool binary[16];

    for(int i = 0; i < 16; i++)
        binary[i] = false;
    
    int count = 1;

    for(long long int i = 0; i < x; i++){
        for( int j = 0; j < n; j++){
            if( (i+1) % (j+1) == 0 && j<n-1){
                binary[j] = !binary[j];
            }
            if(count == 2){
                binary[n-1] = !binary[n-1];
                count = 0;
            }
            cout << int(binary[j]);
        }
        cout << nl;
        count++;
    }

    
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