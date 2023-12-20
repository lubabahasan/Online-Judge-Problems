#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=int(a); i<int(b); i++)
#define per(i,a,b) for(int i=int(b)-1; i>=int(a); i--)
#define nl '\n'

using namespace std;

int main()
{
    long int n, i=1;;
    cin>>n;

    while(i<=n){
        cout<<i<<" "<<i*i<<" "<<i*i*i<<nl;
        i++;
    }

    return 0;
}

