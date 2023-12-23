#include<bits/stdc++.h>
using namespace std;
int sumn(int w)
{
    int s=0;
    for(int i=1;i<=w;i++)
    {
        s+=i;
    }
    return s;
}
int main()
{
    int k,n,w;
    cin>>k>>n>>w;
    if(n-(k*sumn(w))<0) cout<<abs(n-(k*sumn(w)))<<endl;
    else cout<<0<<endl;
    return 0;
}