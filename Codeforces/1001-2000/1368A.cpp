#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,n;
        int i=1,j=1,x=0,c=0,s=1;
        cin>>a>>b>>n;
        
        while(s){
            c++;
            x=max(a,b)*j + min(a,b)*i;
            if(x>n){
                cout<<c<<'\n';
                break;
            }
            j+=i;
            i=j-i;
        }
    }
    return 0;
}