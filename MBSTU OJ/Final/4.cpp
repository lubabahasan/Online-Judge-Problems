#define nl '\n'
#include<iostream>
//22201134 Lubaba Hasan

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int s;
        cin>>s;
        long long int num[s];
        for(int i=0; i<s; i++)
            cin>>num[i];
        for(int i=s-1; i>=0; i--){
            if(num[i]>=0)
                cout<<num[i]<<" ";
            else
                cout<<9<<" ";
        }
        cout<<nl;
    }
    return 0;
}
