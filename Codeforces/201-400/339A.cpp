#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=s.length();
    int x=ceil(l/2.0);
    int num[x];
    for(int i=0;i<l;i+=2){
        num[i/2]=int(s[i])-48;
    }
    int n=sizeof(num)/sizeof(num[0]);
    
    sort(num,num+n);
    
    for(int i=0;i<l;i++){
        if(i%2==0){
            cout<<num[i/2];
            if(l>1 && i<l-1) cout<<"+";
        }
    }
    cout<<'\n';
    return 0;
}