#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,r,cost,a=1,c=1;
    cin>>k>>r;
    cost=k;
    while(a!=0)
    {
        if(cost%10==0 || (cost-r)%10==0) a=0;
        else {
            cost+=k;
            c++;
        }
    }
    cout<<c<<"\n";
    return 0;
}