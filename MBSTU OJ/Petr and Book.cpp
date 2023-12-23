#define nl '\n'
#include<iostream>
//22201134 Lubaba Hasan

using namespace std;

int main()
{
    short int n;
    while(cin>>n){

        short int day=0, page=0, week[7], m;
        for(short int i=0; i<7; i++)
            cin>>week[i];
        if(n){
            short int flag=1;
            while(flag){
                for(m=0; m<7 ; m++){
                    if(page<n){
                        page+=week[m];
                        //cout<<"page"<<page;
                        day++;
                    } else {
                        if(day%7==0) cout<<7<<nl;
                        else cout<<day%7<<nl;
                        flag=0;
                        break;
                    }
                }
            }
        } else cout<<0<<nl;
    }
}
