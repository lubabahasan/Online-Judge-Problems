#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int m,s,suminp=0,sumn=0,temp=0,num,x;
        cin>>m>>s;
        for(int i=0;i<m;i++)
        {
            cin>>num;
            suminp+=num;
            if(num>temp)
            temp=num;
        }
        for(int i=0;i<=temp;i++)
        {
            sumn+=i;
        }
        s-=(sumn-suminp);
        while(s>0)
        {
            temp++;
            s-=temp;
        }
        if(s==0)
        {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}