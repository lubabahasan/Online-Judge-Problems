#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        if(n<=2) cout<<1<<"\n";
        else if(n<=x) cout<<2<<"\n";
        else cout<<ceil((n-2.0)/x)+1<<"\n";
    }
    return 0;
}