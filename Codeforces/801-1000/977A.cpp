#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int m,k;
    cin>>m>>k;
    for(int i=0;i<k;i++)
    {
        if(m%10==0) m/=10;
        else m--;
    }
    cout<<m<<"\n";
    return 0;
}