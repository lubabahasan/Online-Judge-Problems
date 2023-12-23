#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        int sum=0;
        cin>>n;
        if(n%4==0) {
            cout<<"YES"<<"\n";
            for(int i=2;i<=n;i+=2)
            {
                cout<<i<<" ";
                sum+=i;
            }
            for(int i=1;i<n;i+=2)
            {
                if(i!=n-1) {
                    cout<<i<<" ";
                    sum-=i;
                }
                else cout<<sum<<"\n";
            }
        } else cout<<"NO"<<"\n";
    }
    return 0;
}