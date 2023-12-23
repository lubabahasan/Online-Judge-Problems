#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a<b) {
            if((b-a)%2!=0) cout<<1<<"\n";
            else cout<<2<<"\n";
        } else if (a>b) {
            if((a-b)%2==0) cout<<1<<"\n";
            else cout<<2<<"\n";
        } else {
            cout<<0<<"\n";
        }
    }
    return 0;
}