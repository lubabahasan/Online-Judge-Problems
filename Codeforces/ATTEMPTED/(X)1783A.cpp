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
        int num[n];
        for(int i=0;i<n;i++)
        {
            cin>>num[i];
        }
        for(int i=0;i<n;i++)
        {
            if(num[i]==sum)
            {
                if(i==n-1) break;
                swap(num[i],num[i+1]);
                sum+=num[i];
            }
            else sum+=num[i];
        }
        if(sum!=num[n-1])
        {
            cout<<"YES"<<"\n";
            for(int i=0;i<n;i++)
            {
                cout<<num[i]<<" ";
            }
            cout<<"\n";
        }
        else cout<<"NO"<<"\n";
    }
    return 0;
}