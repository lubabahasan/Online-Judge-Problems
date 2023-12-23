#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np,mini;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    mini=min(c*d,(p/np));
    mini=min(mini,((k*l)/nl));
    cout<<mini/n<<"\n";
    return 0;
}