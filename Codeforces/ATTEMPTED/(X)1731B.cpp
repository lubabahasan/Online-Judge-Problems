#include<bits/stdc++.h>
using namespace std;
int main()
{
    long double t,n,s,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        s=(int(((n/2)*(n+1))+((n/2)*((2*n)+(n*(n-1))))-n)*2022)%1000000007;
        //s=s%1000000007;
        cout<<int(s)<<"\n";
    }
    return 0;
}