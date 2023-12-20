#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=int(a); i<int(b); i++)
#define per(i,a,b) for(int i=int(b)-1; i>=int(a); i--)
#define nl '\n'

using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;

    int temp = x+y;

    x=min(x,y);
    y=temp-x;

    int sum=0;
    for(int i=x; i<=y; i++){
        if(i%13!=0)
            sum+=i;
    }

    cout<<sum<<nl;

    return 0;
}
