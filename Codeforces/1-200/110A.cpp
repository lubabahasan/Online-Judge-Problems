#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin>>n;
    int c;
    for(int i=0;i<n.length();i++)
    {
        if(n[i]=='4' || n[i]=='7') c++;
    }
    if(c==4 || c==7) cout<<"YES";
    else cout<<"NO";
    return 0;
}