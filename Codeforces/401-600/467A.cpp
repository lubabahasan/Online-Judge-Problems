#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,p,q,c=0;
    cin>>t;
    while(t--)
    {
        cin>>p>>q;
        if(q-p>=2) c++;
    }
    cout<<c<<"\n";
    return 0;
}