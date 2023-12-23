#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int hc=0,lc=0,h=-1,l=10001;
    while(n--)
    {
        int a;
        cin>>a;
        if(a>h){
            h=a;
            hc++;
        }
        if(a<l){
            l=a;
            lc++;
        }
    }
    lc+hc>0? cout<<lc+hc-2<<'\n': cout<<lc+hc<<'\n';
    return 0;
}