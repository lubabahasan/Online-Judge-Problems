#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,a,b,c,n;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>n;
        if((n-((3*(max(max(a,b),c)))-a-b-c))%3==0 && (n-((3*(max(max(a,b),c)))-a-b-c))>=0) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
    return 0;
}