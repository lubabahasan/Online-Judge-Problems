#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b="hello";
    cin>>a;
    int c=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<a.length();j++)
        {
            if(b[i]==a[j]) {
                c++;
                if(c==5){
                    cout<<"YES"<<"\n";
                    return 0;
                }
                i++;
            }
        }
    }
    if(c<5) cout<<"NO"<<"\n";
    return 0;
}