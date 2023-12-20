#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long int n;
        cin>>n;

        if(n==0){
            cout<<"NULL\n";
        } else {
            if(n%2==0)
                cout<<"EVEN ";
            else
                cout<<"ODD ";
            if(n>0)
                cout<<"POSITIVE\n";
            else
                cout<<"NEGATIVE\n";

        }
    }
}
