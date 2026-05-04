#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'

//calculating sum with equation approach
void solve(int n){
    ll sum = (n * (n + 1))/2;

    while(n>1){
        int temp;
        cin >> temp;

        sum -= temp;
        n--;
    }

    cout << sum << nl;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    solve(n);

}