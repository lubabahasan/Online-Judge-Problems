#define nl '\n';
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,n;

    cin>>a;

    int flag=1;

    while(flag){
        cin>>n;
        if(n>0)
            flag=0;
    }

    int sum=0;
    for(int i=0; i<n; i++){
        sum+=a;
        a++;
    }

    cout<<sum<<nl;

    return 0;
}
