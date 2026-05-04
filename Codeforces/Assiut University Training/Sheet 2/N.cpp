#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define cin(a) cin >> a
#define ll long long

ll a, b, c, d, i = 0, m = 1, n, x, y;
string s, t, u, v;

int main(){
    char chr;

    cin >> chr;
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<arr[i]; j++){
            cout << chr;
        }
        cout << nl;
    }


}
