#include<iostream>
//22201134 Lubaba Hasan

using namespace std;

int main(){
    short int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1; i<=100; i++){
            if(n%i==0)
                cout<<i<<" ";
        }
        cout<<'\n';
    }
    return 0;
}
