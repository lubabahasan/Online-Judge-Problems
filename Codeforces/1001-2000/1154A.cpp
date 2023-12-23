#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,m,n,o,big;
    cin>>l>>m>>n>>o;
    big=max(l,m);
    big=max(big,n);
    big=max(big,o);
    if(big-n!=0) cout<<big-n<<" ";
    if(big-l!=0) cout<<big-l<<" ";
    if(big-m!=0) cout<<big-m<<" ";
    if(big-o!=0) cout<<big-o<<" ";
    cout<<"\n";
    return 0;
}