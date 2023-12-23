//Lubaba Hasan UAP
#define nl '\n'
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string a; cin>>a;
        int n; n = stoi(a);
        int m=1;
        vector<int>sumnd;
        while(n){
            if((n%10)*m)
                sumnd.push_back((n%10)*m);
            m*=10;
            n/=10;
        }
        cout<<sumnd.size()<<nl;
        for(auto i=sumnd.begin(); i!=sumnd.end(); i++)
            cout<<*i<<" ";
        cout<<nl;

    }
}
