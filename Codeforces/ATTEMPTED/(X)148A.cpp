#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,l,m,n,d,tdd;
    cin>>k>>l>>m>>n>>d;
    int td=d,count;
    for(int i=1;i<=d;i++)
    {
        count=d;
        if(k==1){
            break;
            count=0;
        }
        if(k!=1 && i%k==0) count--;
        else if(i%l==0) count--;
        else if( i%m==0) count--;
        else if(i%n==0) count--;
    }
    cout<<td-count<<endl;
    return 0;
}