#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,sum=0,m=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a>m) m=a;
        sum+=a;
    }
    cout<<m*n-sum<<"\n";
    return 0;
}