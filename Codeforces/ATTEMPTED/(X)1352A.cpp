#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    stack<int> boom;
    cin>>n;
    while(n--)
    {
        int m=10000;
        cin>>a;
        for(int i=a;i>0;)
        {
            if(a<=m) {
                if(a%m==0) boom.push(a);
                else boom.push(a-(a%m));
                a=a%m;
            } else m/=10;
            cout<<a<<" "<<m<<"\n";
        }
    }
    while(!boom.empty())
    {
        cout<<boom.top()<<" ";
        boom.pop();
    }


    /*int n,a,m[4]={10000,1000,100,10};
    stack<int> boom;
    cin>>n;
    while(n--)
    {
        cin>>a;
        int i=0;
        while(a!=0) {
            if(a<=m[i]) {
                if(a%m[i]==0) {
                    boom.push(a);
                    a=0;
                } else {
                    boom.push(a-(a%m[i]));
                    a=a%m[i];
                }
            } else i++;
        }
        cout<<boom.size()<<"\n";
        while(!boom.empty())
        {
            cout<<boom.top()<<" ";
            boom.pop();
        }
        cout<<"\n";
    }*/
    return 0;
}