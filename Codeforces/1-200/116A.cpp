#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cap,mincap;
    cin>>n;
    while(n--)
    {
        int exit,enter;
        cin>>exit>>enter;
        cap=(cap-exit)+enter;
        if(cap>mincap) mincap=cap;
    }
    cout<<mincap<<endl;
    return 0;
}