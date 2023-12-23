#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        cout<<int(ceil((n*m)/2.0))<<"\n";
    }
    return 0;
}