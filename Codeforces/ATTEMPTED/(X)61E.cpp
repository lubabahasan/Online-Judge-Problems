#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,c;
    cin>>t;
    long long int p[t];
    for(int i=0;i<t;i++)
    {
        cin>>p[i];
    }
    for(int i=0;i<t-2;i++)
    {
        //if(p[i]>p[i+1]){
        for(int j=i+1;j<t-1;j++)
        {
            if(p[i]>p[j]){
            //if(p[j]>p[j+1]){
            for(int k=j+1;k<t;k++)
            {
                //if(p[i]>p[j] && p[j]>p[k]) c++;
                if(p[j]>p[k]) c++;
            }
            }
        }
    }
    cout<<c<<"\n";
    return 0;
}