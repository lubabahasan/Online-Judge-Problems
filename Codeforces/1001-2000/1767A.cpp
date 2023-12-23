#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int ax,ay,bx,by,cx,cy;
    cin>>t;
    while(t--)
    {
        cin>>ax>>ay>>bx>>by>>cx>>cy;
        if(((ax==cx || ay==cy) && (cx==bx || cy==by)) ||
        ((ax==cx || ay==cy) && (ax==bx || ay==by)) ||
        ((ax==bx || ay==by) && (cx==bx || cy==by)))
        cout<<"NO"<<"\n";
        else cout<<"YES"<<"\n";
    }
    return 0;
}