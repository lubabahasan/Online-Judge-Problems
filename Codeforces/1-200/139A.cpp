#define nl '\n'
#include<iostream>
//22201134 Lubaba Hasan

using namespace std;

int main()
{
    short int n, page=0, week[7], m, day=0;
    cin>>n;
    for(short int i=0; i<7; i++)
        cin>>week[i];

    while(1){
        for(m=0; m<7 ; m++){
            if(page<n){
                page+=week[m];
                day++;
            } else {
                if(day%7==0) cout<<7;
                else cout<<day%7;
                return 0;
            }
        }
    }
}
