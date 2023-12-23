#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    int c;
    cin>>s>>t;
    if(s.length()==t.length())
    {
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==t[s.length()-(i+1)])
            {
                c++;
            }
        }

    }
    if(c<s.length()) cout<<"NO"<<endl;
    else cout<<"YES";
    return 0;
}