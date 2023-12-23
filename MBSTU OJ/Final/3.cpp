#define nl '\n'
#include<iostream>
//22201134 Lubaba Hasan

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, c=0;
        cin>>n;
        while(n--){
            int a;
            cin>>a;
            if(a>=40)
                c++;
        }
        cout<<c<<nl;
    }
    return 0;
}
