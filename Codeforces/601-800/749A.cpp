#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a;
    cin>>a;
    cout<<a/2<<"\n";
    for(int i=0;i<(a/2)-1;i++)
    {
        cout<<2<<" ";
    }
    cout<<a-((a/2)-1)*2<<" ";
    cout<<"\n";
    return 0;
}