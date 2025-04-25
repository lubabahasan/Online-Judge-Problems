#include<bits/stdc++.h>
using namespace std;
#define nl '\n'

void solve(){
    int n;
    cin >> n;

    // sum of 1 to n
    long long int sum = (n*(n+1))/2;

    cout << sum << nl;

    if( sum % 2 != 0){
        cout << "NO\n";
    } else {
        cout << "YES\n";
        long long int target_sum = sum/2;
        long long int dp[n+1][target_sum];

        for( int i = 0; i < n+1; i++){
            for( int j = 0; j < n+1; j++){
                if( i == 0 || j == 0){
                    dp[i][j] = 0;
                } else {
                    
                }
            }
        }
    }
}

int main(){
    //cin.tie(0);
    //ios::sync_with_stdio(false);

    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
}