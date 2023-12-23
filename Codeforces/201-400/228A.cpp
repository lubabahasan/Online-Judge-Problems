#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[4],c=0;
    for(int i=0;i<4;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<4;i++)
    {
        for(int j=i+1;j<4;j++)
        {
            if(a[i]==a[j] && a[j]!='L')
            {
                c++;
                a[j]='L';
            }
        }
    }
    cout<<c<<"\n";
    return 0;
}