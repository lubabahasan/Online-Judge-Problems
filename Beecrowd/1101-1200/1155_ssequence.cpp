#define nl '\n';
#include<bits/stdc++.h>
using namespace std;

int main()
{
    double sum=0;
    for( int i=1; i<=100; i++){
        sum += (1.0/i);
        //cout<<(1.0/i)<<" "<<sum<<nl;
    }
    cout<<fixed<<setprecision(2)<<sum<<nl;
    return 0;
}

