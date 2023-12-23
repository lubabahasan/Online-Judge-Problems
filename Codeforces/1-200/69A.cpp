#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c,sa=0,sb=0,sc=0;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        sa+=a;
        sb+=b;
        sc+=c;
    }
    if(sa==0 && sb==0 && sc==0) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
    return 0;
}