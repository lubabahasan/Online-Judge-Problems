#include<bits/stdc++.h>
using namespace std;
#define nl      "\n"

int main()
{
        int n,cnt_doors=0,cnt_keys=0;       cin>>n;
        string s;                           cin>>s;
        string temp=s;

        for(int i=0;i<(2*n)-2;i++)
        {
             if(temp[i]>='A' && temp[i]<='Z') cnt_doors++;
             cout<<"door"<<cnt_doors<<nl<<nl;

             if(s[i]>='a' && s[i]<='z')
             {
                 s[i]=toupper(s[i]);
                 if(temp[i]==s[i]) cnt_keys++;
                 cout<<s[i]<<temp[i]<<"keys"<<cnt_keys<<" ";
             }
        }

        cout<<nl<<cnt_doors<<nl<<cnt_keys<<nl;
}
