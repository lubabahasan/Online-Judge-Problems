#include<bits/stdc++.h>

using namespace std;

bool isOk(long long int mid, long long int n) {
    if (mid * mid < n)
        return false;
    else
        return true;
}

void solve() {
    long long int n;
    cin >> n;

    long long int squares = 0;

    while (n--) {
        long long int a;
        cin >> a;
        squares += a;
    }

    long long int l = 0, r = 1e9, mid;

    while (l < r) {
        mid = l + (r - l) / 2;
        if (isOk(mid, squares) == 0) {
            l = mid + 1;
        } else {
            r = mid;
        }
    }

    if ((mid) * (mid) == squares || (mid + 1) * (mid + 1) == squares) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}

/*

10
1 1
1 4
1 9
1 16
1 25
1 36
1 49
1 64
1 81
1 100

*/