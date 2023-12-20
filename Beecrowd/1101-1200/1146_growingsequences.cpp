#define nl '\n';
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x=1;

    while(x)
    {
        cin>>x;
        for(int i=1; i<=x; i++)
        {
            cout<<i;
            if(i==x){
                cout<<nl;
            } else
                cout<<" ";
        }
    }

    return 0;
}
