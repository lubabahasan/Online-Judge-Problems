#define nl '\n'
#include<iostream>
//22201134 Lubaba Hasan

using namespace std;

int main()
{
    unsigned long long int a,b,c,d;
    while(cin>>a){
        cin>>b; cin>>c; cin>>d;
        unsigned long long int val=1, ans=1;

        b = b%(d-1);
        //cout<<"b="<<b<<nl;
        a = a%(d-1);
        //cout<<"a="<<a<<nl;

        while(c){                             //calculate y for a;
            if(c%2!=0)
                val = (val*b)%(d-1);
            c/=2;
            b = (b*b)%(d-1);
            //cout<<"val="<<val<<"c="<<c<<"b="<<b<<nl;
        }

        while(val){
            if(val%2!=0)
                ans = (ans*a)%(d);
            val/=2;
            a = (a*a)%(d);
            //cout<<"ans="<<ans<<"val="<<val<<"a="<<a<<nl;
        }

        cout<<ans<<nl;
    }

    return 0;
}
