//Lubaba Hasan UAP
#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--){
        int num, candy, mihai=0, total=0;
        cin>>num;
        while(num--){
            cin>>candy;
            if(candy%2==0)
                mihai+=candy;
            total+=candy;
        }
        if(mihai>(total-mihai))
            cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}


