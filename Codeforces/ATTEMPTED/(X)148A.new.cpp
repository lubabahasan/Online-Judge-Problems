#include<bits/stdc++.h>
using namespace std;
int main()
{
    int dmgtype[4],tdragon;
    for(int i=0;i<4;i++)
    {
        cin>>dmgtype[i];
    }
    cin>>tdragon;
    int dstate[tdragon];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<tdragon;j+=dmgtype[i])
        {
            cout<<dstate[i]<<" ";
            if(dstate[j]!=0) dstate[j]=0;
            cout<<i<<" "<<j<<" "<<dmgtype[i]<<" "<<dstate[j]<<endl;
        }
    }
    int j=tdragon;
    for(int i=0;i<j;i++)
    {
        tdragon-dstate[i];
    }
    cout<<tdragon;
    /*for(int i=0;i<tdragon;i++)
    {
        cout<<dstate[i]<<" ";
    }*/
    return 0;
}