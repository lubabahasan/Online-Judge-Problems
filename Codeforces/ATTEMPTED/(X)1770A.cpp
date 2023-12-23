#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        long long int kiyo[n],kox[m],sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>kiyo[i];
        }
        sort(kiyo,kiyo+n);
        if(n<m) {   
            for(int i=0;i<m;i++)
            {
                cin>>kox[i];
            }
            sort(kox,kox+m,greater<int>());
            for(int i=0;i<n;i++)
            {
                sum+=max(kiyo[i],kox[i]);
            }
        } else {
            for(int i=0;i<m;i++)
            {
                cin>>kiyo[i];
            }
            for(int i=0;i<n;i++)
            {
                sum+=kiyo[i];
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
}