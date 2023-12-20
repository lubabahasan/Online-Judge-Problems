#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=int(a); i<int(b); i++)
#define per(i,a,b) for(int i=int(b)-1; i>=int(a); i--)
#define nl '\n'

using namespace std;

int main()
{
    long int n, i=1;;
    cin>>n;

    while(n){
        cout<<i<<" "<<i+1<<" "<<i+2<<" PUM"<<nl;
        i+=4;
        n--;
    }

    return 0;
}


