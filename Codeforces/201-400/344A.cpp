#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b=0,c=0;
    cin>>t;
    while(t--)
    {
        cin>>a;
        if(a!=b) c++;
        b=a;
    }
    cout<<c<<"\n";
    return 0;
}