#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,a;
    cin>>n>>p;
    vector<int>c(n+1,0);

    while(p--)
    {
        cin>>a;
        c[a]++;
    }
    cin>>p;
    while(p--)
    {
        cin>>a;
        c[a]++;
    }

    for(int i=1;i<=n;i++){
        if(c[i]==0){
            cout<<"Oh, my keyboard!"<<'\n';
            return 0;
        }
    }
    cout<<"I become the guy."<<'\n';

    return 0;
}
