#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,r;
    cin>>t;
    while(t--)
    {
        int c=0;
        cin>>a>>b;
        while(a) {
            c+=max(a,b)/min(a,b);
            r=max(a,b)%min(a,b);
            b=a;
            a=r;
        }
        cout<<c<<"\n";
    }
    return 0;
}