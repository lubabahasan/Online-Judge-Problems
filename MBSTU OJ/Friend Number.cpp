#define nl '\n'
#include<iostream>
//22201134 Lubaba Hasan

using namespace std;

int main()
{
    unsigned long long int a,b;
    while(cin>>a){
        cin>>b;
        int flag = 1;
        unsigned long long int sum_a=1, sum_b=1;
        for(unsigned long long int i=2; i*i<=a; i++){
            if(sum_a<=b){
                if(a%i==0){
                    sum_a+=i+(a/i);
                    //cout<<"a="<<a<<"i="<<i<<"sum a="<<sum_a<<nl;
                }
            } else {
                flag = 0;
                break;
            }
        }
        if(flag){
           for(unsigned long long int i=2; i*i<=b; i++){
                if(sum_b<=a){
                    if(b%i==0){
                        sum_b+=i+(b/i);
                        //cout<<"b="<<b<<"i="<<i<<"sum b="<<sum_b<<nl;
                    }
                } else {
                    flag = 0;
                    break;
                }
            }
        }

        if(sum_a==b && sum_b==a && flag)
            cout<<"Yes\n";
        else
            cout<<"No\n";

    }
}
