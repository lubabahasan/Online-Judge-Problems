#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int c=1,mx=0;
    for(int i=0;i<a.length()-1;i++)
    {
        if(a[i]==a[i+1]) {
            c++;
            if(c>mx) mx=c;
        }
        else c=1;
    }
    if(mx>=7) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
    return 0;
}