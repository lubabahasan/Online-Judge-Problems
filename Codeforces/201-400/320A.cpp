#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long int n;
    cin >> n;

    int a, b, c;

    while (n)
    {
        a = n % 10;
        b = n % 100;
        c = n % 1000;

        if (a == 1 || b == 14 || c == 144)
        {
            if (c == 144)
            {
                n /= 1000;
            }
            else if (b == 14)
            {
                n /= 100;
            }
            else
            {
                n /= 10;
            }
        }
        else
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    //    cin>>t;
    while (t--)
        solve();
}