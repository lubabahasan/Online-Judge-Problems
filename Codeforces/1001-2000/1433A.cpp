#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a,s;
        cin>>a;
        string x=to_string(a);
        s=((a%10)-1)*10;
        for(int i=1;i<=x.length();i++)
        {
            s+=i;
        }
        cout<<s<<"\n";
    }
    return 0;
}