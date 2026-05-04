#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

#define nl '\n'
#define ll long long

ll nC3(ll n){
    return (n*(n-1)*(n-2)) / 6;
}

int main(){

    cin.tie(0);
    ios_base::sync_with_stdio(0);

    // n researchers, m conflicts
    // 3 distinct people with no conflicts with the author
    // no. of pos. trio for a given author?

    ll n, m; cin >> n >> m;

    vector <ll> v(n+1, 0);

    ll temp1, temp2;

    for(ll i = 0; i < m ; i++){
        cin >> temp1 >> temp2;
        v[temp1]++;
        v[temp2]++;
    }

    for(ll i = 1; i <= n; i++){
        ll total = n - v[i] - 1;
        cout << nC3(total) << " ";
    }


}