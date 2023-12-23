#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,mini,maxi;
    cin>>a>>b>>c;
    mini=min(a,b);
    mini=min(mini,c);
    maxi=max(a,b);
    maxi=max(maxi,c);
    cout<<maxi-mini<<"\n";
    return 0;
}