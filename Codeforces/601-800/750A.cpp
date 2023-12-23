#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int t=240-k;
    if(t<5) cout<<0<<"\n";
    else {
        for(int i=1;i<=n;i++)
        {
            t-=5*i;
            if(t<(5*(i+1)))
            {
                cout<<i<<"\n";
                return 0;
            }
        }
        cout<<n<<"\n";
    }
    return 0;
}