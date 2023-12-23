#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    if(n>m) cout<<n-m<<"\n";
    else if(n<m) {
        if(m%2==0) cout<<abs((m/2)-n)+1<<"\n";
        else cout<<abs((m/2)-n)+2<<"\n";
    } else cout<<0<<"\n";
    return 0;
}