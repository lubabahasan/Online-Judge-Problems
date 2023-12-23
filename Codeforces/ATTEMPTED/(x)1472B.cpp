#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a;
    cin>>t;
    while(t--)
    {
        int oc=0,tc=0,s=0;
        cin>>n;
        while(n--)
        {
            cin>>a;
            s+=a;
            if(a==1) oc++;
            else tc++;
        }
        if(s%2==0){
            if((oc==tc && oc!=1) || (oc%2==0 && tc==0) || (tc%2==0 && oc==0)) cout<<"YES"<<"\n";
            else cout<<"NO"<<"\n";
        } else cout<<"NO"<<"\n";
    }
    return 0;
}