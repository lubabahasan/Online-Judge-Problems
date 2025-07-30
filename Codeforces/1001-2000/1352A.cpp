#include <bits/stdc++.h>
#define nl '\n'
using namespace std;

void solve()
{
    int n;
    int mul = 1;
    cin >> n;
    int arr[1000];
    int c = 0;

    while (n)
    {
        int m = n % 10;
        if (m != 0)
        {
            arr[c] = m * mul;
            c++;
        }
        n /= 10;
        mul *= 10;
    }

    cout << c << nl;
    for (int i = 0; i < c; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
        cout << nl;
    }
}
 