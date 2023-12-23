#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a==b) cout<<4*a*a<<"\n";
        else if(a==1 || b==1) cout<<pow((max(b,a)),2)<<"\n";
        else {
            if(pow(ceil(sqrt(2*a*b)),2)<pow(min(2*a,2*b),2)) cout<<pow(max(a,b),2)<<"\n";
            else cout<<pow(ceil(sqrt(2*a*b)),2)<<"\n";
        }
    }
    return 0;
}