#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int present[t];
    for(int i=0;i<t;i++)
    {
        cin>>present[i];
    }
    for(int i=0;i<t;i++)
    {
        for(int j=0;j<t;j++)
        {
            if(present[j]==i+1) cout<<j+1<<" ";
        }
    }
    return 0;
}