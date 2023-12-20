#define nl '\n';
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt=0;
    cin>>n;
    long int a=0,b=1,c=a+b;

    cout<<0;
    if(n>1){
        cout<<" "<<1;
        if(n>2){
            n-=2;
             while(cnt<n){
                if(cnt!=n)
                    cout<<" ";
                cout<<c;
                a=b;
                b=c;
                c=a+b;
                cnt++;
            }
        }
    }

    cout<<nl;

    return 0;
}

