#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,temp=0,bill[5]={100,20,10,5,1};
    cin>>a;
    for(int i=0;i<5;i++)
    {
        temp+=a/bill[i];
        a=a%bill[i];
    }
    cout<<temp<<"\n";
    return 0;
}