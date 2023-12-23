#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    string a;
    cin>>a;
    for(int i=1;i<n;i++)
    {
        if(a[i-1]==a[i]) c++;
    }
    cout<<c<<"\n";
    return 0;
}