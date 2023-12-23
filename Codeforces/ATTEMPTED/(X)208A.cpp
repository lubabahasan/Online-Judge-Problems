#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    vector<char>song;
    for(int i=0;i<a.length()-1;i++)
    {
        if(a[i]=='W' && a[i+1]=='U' && a[i+2]=='B')
        {
            song.push_back(' ');
            if(i==a.length()-2) break;
            song.push_back(a[i+3]);
        } else song.push_back(a[i]);
    }
    for(auto x:song)
    {
        cout<<x;
    }
    cout<<"\n";
    return 0;
}