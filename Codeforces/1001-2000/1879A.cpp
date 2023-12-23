#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long int n, s, e, w;
        cin>>n;
        cin>>s>>e;
        n--;
        w=s;
        long int str[n], en[n], flg=0;
        for(int i=0; i<n; i++){
            cin>>str[i]>>en[i];
            if(str[i]>=s){
                if(en[i]>=e)
                    flg=1;
            }
        }
        if(flg)
            cout<<-1<<'\n';
        else
            cout<<w<<'\n';
    }
    return 0;
}
