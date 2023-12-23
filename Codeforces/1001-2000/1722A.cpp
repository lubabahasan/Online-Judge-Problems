//Lubaba Hasan UAP
#define nl '\n'
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string a = "Timru", s;
        cin>>s;
        sort(s.begin(), s.end());
        if(s==a)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
