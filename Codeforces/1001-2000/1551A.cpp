#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a;
    cin>>t;
    while(t--)
    {
        cin>>a;
        if(a%3==0) cout<<a/3<<" "<<a/3<<"\n";
        else {
            if((a/3)+(2*((a/3)+1))==a) cout<<a/3<<" "<<(a/3)+1<<"\n";
            else cout<<(a/3)+1<<" "<<a/3<<"\n";
        }
    }
    return 0;
}