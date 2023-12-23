#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a;
    b=a;
    if(int(a[0]>=97)) {
        b[0]=char(toupper(a[0]));
        for(int i=1;i<a.length();i++)
        {
            if(int(a[i])<91) b[i]=char(tolower(a[i]));
            else {
                cout<<a<<"\n";
                return 0;
            }
        }
        cout<<b<<"\n";
    } else {
        for(int i=0;i<a.length();i++)
        {
            if(int(a[i])<91) b[i]=char(tolower(a[i]));
            else {
                cout<<a<<"\n";
                return 0;
            }
        }
        cout<<b<<"\n";
    }
    return 0;
}