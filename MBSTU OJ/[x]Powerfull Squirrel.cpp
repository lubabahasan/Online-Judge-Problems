#define nl '\n'
#include<iostream>
//22201134 Lubaba Hasan

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long int n;
        cin>>n;
        if(n)
            cout<<(n/9)+1<<nl;
        else
            cout<<0<<nl;
    }
    return 0;
}
