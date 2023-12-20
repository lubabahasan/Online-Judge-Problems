#define nl '\n';
#include<bits/stdc++.h>
using namespace std;

int main()
{
    double sum=1;
    for( int i=3, j=2; i<=39; i+=2, j*=2){
        sum += double(i)/j;
        //cout<<i<<" "<<j<<" "<<sum<<nl;
    }
    cout<<fixed<<setprecision(2)<<sum<<nl;
    return 0;
}

