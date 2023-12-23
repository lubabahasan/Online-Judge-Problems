#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c;
    cin>>a>>b>>c;
    
    vector<int> ac (100, 0);
    vector<int> bc (100, 0);
    vector<int> cc (100, 0);

    for(int i=0;i<a.length();i++) ac[int(a[i])]++;
    for(int i=0;i<b.length();i++) bc[int(b[i])]++;
    for(int i=0;i<c.length();i++) cc[int(c[i])]++;

    for(int i=65;i<91;i++)
    {
        if(ac[i]+bc[i]!=cc[i]) {
            cout<<"NO"<<'\n';
            return 0;
        }
    }
     cout<<"YES"<<'\n';

    return 0;
}