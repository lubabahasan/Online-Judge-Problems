#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,temp=1000000000,c=0,mx=0;
    cin>>n;
    while(n--)
    {
        cin>>a;
        if(a>=temp) {
            c++;
            if(c>mx) mx=c;
            temp=a;
        } else {
            c=0;
            temp=0;
        }
    }
    cout<<mx<<"\n";
}