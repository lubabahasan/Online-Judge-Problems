#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,c=0;
    cin>>t;
    while(t--)
    {
        cin>>x;
        if(x==1) c=6;
    }
    if(c==6) cout<<"HARD"<<"\n";
    else cout<<"EASY"<<"\n";
    return 0;
}