#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define ll long long

ll solve(int n, vector<ll> &nums){
    ll tot = 0;
    for(int i = 1; i < n; i++){
        if(nums[i] < nums[i-1]){
            tot += nums[i-1] - nums[i];
            nums[i] = nums[i-1];
        }
    }

    return tot;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int t = 1;
    //cin >> t;

    int n, i = 0;
    cin >> n;
    vector<ll> num;

    while(i!=n){
        ll temp;
        cin >> temp;
        num.push_back(temp);
        i++;
    }

    while(t--){
        cout << solve(n, num) << nl;
    }
}