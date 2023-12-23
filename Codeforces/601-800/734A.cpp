#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='A') c--;
        else c++;
    }
    if(c<0) cout<<"Anton"<<endl;
    if(c>0) cout<<"Danik"<<endl;
    if(c==0) cout<<"Friendship"<<endl;
    return 0;
}