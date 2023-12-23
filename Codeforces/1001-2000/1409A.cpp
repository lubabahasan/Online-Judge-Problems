#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b;
        cin>>a>>b;
        abs(a-b)%10==0?cout<<abs(a-b)/10<<'\n':cout<<(abs(a-b)/10)+1<<'\n';
    }
    return 0;
}