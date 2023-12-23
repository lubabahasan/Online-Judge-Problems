#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    vector<int>c(d,0);
    for(int i=0;i<d;i++){
        if((i+1)%k==0 || (i+1)%l==0 || (i+1)%m==0 || (i+1)%n==0) c[i]=1;
    }
    int sum=0;
    for(int i=0;i<d;i++) sum+=c[i];
    cout<<sum<<'\n';
    return 0;
}
