#define nl '\n'
#include<iostream>
//22201134 Lubaba Hasan

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int num[5]={50,25,10,5,1};
        int n, rem, c=0, coin;
        cin>>n;
        for(int i=0; i<5; i++){
            if(n){
                coin=n/num[i];
                c+=coin;
                n=n%num[i];
            } else break;
        }
        cout<<c<<nl;
    }
    return 0;
}
