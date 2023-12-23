#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    if(a==1 && b==1 && c==1) cout<<"Impossible"<<"\n";
    else {
    double x=max(a,b),y=min(a,b),z;
    x=max(x,c),z=min(x,c);
    double m=ceil(x/2), n=x-m;
    if((m==y||m==z) && (n==y||n==z))
    {
        cout<<int(abs(a-b))<<" "<<int(abs(a-b)+abs(a-c))<<" "<<int(abs(a-c));
    } else if (y+z>=a) {
        cout<<int(abs(a-b))<<" "<<int(abs(a-b)+abs(a-c))<<" "<<int(abs(a-c));
    } else cout<<"Impossible"<<"\n";
    }
    return 0;
}