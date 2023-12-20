#define nl '\n';
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    long int fact = 1;

    while(n){
        fact*=n;
        n--;
    }

    cout<<fact<<nl;

    return 0;
}

