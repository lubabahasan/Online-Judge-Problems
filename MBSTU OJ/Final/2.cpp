#include<iostream>
//22201134 Lubaba Hasan

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a%2==0)
            if(a/2==b)
                cout<<"Yes\n";
            else
                cout<<"No\n";
        else
            if((a*3)+1==b)
                "Yes\n";
            else
                cout<<"No\n";
    }
    return 0;
}
