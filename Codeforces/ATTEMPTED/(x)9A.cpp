#include<bits/stdc++.h>
using namespace std;
int main()
{
    int w,y;
    cin>>w>>y;
    w=max(w,y);
    y=(6-w+1)/6;
    //if(y==0) cout<<0<<"/"<<1<<"\n";
    if(y==1) cout<<1<<"/"<<6<<"\n";
    else if(y+1<6) cout<<ceil(6/(y+1))<<"/"<<6/(y+1)<<"\n";

    return 0;
}