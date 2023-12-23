#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    char s[101],s1[101];
    cin>>t;
    while(t--)
    {
        cin>>s;
        for(int i=0,j=strlen(s)-1;i<strlen(s),j>=0;i++,j--)
        {
            s1[i]=s[j];
        }
        for(int i=0;i<strlen(s);i++)
        {
            cout<<s[i];
        }
        for(int i=0;i<strlen(s);i++)
        {
            cout<<s1[i];
        }
        cout<<endl;
    }
    return 0;
}