#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,m;
    cin>>t;
    while(t--)
    {
        string s;
        int cq=0,ca=0,c=cq-ca;
        cin>>m>>s;
        for(int i=0;i<m;i++)
        {
            if(s[i]=='Q') cq++;
            if(s[i]=='A') ca++;
        }
        if(s[m-1]=='Q') c=1;
        if(c>0) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
    return 0;
}