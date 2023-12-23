#include<bits/stdc++.h>
using namespace std;
int main()
{
    string q,r;
    cin>>q>>r;
    for(int i=0;i<q.length();i++)
    {
        if(q[i]==r[i]) q[i]='0';
        else q[i]='1';
    }
    cout<<q<<"\n";
}