#define nl '\n';
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x,z;

    cin>>x;

    int flag=1;

    while(flag){
        cin>>z;
        if(z>x)
            flag=0;
    }

    int sum=0;
    int i;
    for(i=0; ; i++){
        //cout<<sum<<" "<<x<<" "<<z<<nl;
        if(sum>z)
            break;
        sum+=x;
        x++;
    }

    cout<<i<<nl;

    return 0;
}

