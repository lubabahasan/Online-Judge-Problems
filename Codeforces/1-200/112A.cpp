#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    int ok=0;
    cin>>a>>b;
    for(int i=0;i<a.length();i++)
    {
        if(toupper(a[i])<toupper(b[i]))
        {
            cout<<-1<<endl;
            break;
        } else if(toupper(a[i])>toupper(b[i]))
        {
            cout<<1<<endl;
            break;
        } else {
            ok++;
        }
    }
    if(ok==a.length()) cout<<0<<endl;
    return 0;
}