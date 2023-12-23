#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int num[n],m,n=1,temp=0;
        for(int i=0;i<n;i++)
        {
            cin>>num[i];
        }
        for(int j=0;j<n;j++)
        {
            m=1;
            for(int i=j;i<n;i++)
            {
                m=m*num[i];
                if(m>temp) temp=m;
            }
            cout<<m<<"\n";
        }
        
        cout<<temp;
    }
    return 0;
}