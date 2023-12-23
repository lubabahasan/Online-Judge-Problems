#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,r;
    cin>>a;
    if(a%4==0||a%7==0||a%47==0||a%74==0||a%477==0||a%447==0||a%474==0) cout<<"YES"<<"\n";
    else {
        string x=to_string(a);
        for(int i=0;i<x.length();i++)
        {
            if(x[i]!='4' && x[i]!='7') {
                cout<<"NO"<<"\n";
                return 0;
            }
        }
        cout<<"YES"<<"\n";
    }

    return 0;
}