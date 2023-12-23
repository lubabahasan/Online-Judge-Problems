//Lubaba Hasan UAP
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int mish=0, chris=0, m, c;
    while(t--){
        cin>>m>>c;
        if(m>c)
            mish++;
        else if(m<c)
            chris++;
    }
    mish>chris? cout<<"Mishka\n" : mish==chris? cout<<"Friendship is magic!^^\n" : cout<<"Chris\n";

    return 0;
}


