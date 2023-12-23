#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        int k=2,c=1;
        cin>>n;
        while(c)
        {
            int x=pow(2,k)-1;
            if(n%x==0)
            {
                cout<<n/x<<"\n";
                c=0;
            } else k++;
        }
    }
    return 0;
}