#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,k,x;
    cin>>t;
    while(t--)
    {
        cin>>a>>k;
        if(k==0) {
            if(a%2==0) cout<<0<<"\n";
            else cout<<1<<"\n";
        }
        else cout<<abs(k-a)<<"\n";
    }
    
    return 0;
}