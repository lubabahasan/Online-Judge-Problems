#include<bits/stdc++.h>
using namespace std;
#define nl '\n'

int main(){
    int t;
    cin>>t;
    char dig[10] = {10,1,2,3,4,5,6,7,8,9};
    while(t--){
        int c=0;
        string pin;
        cin>>pin;
        c+=abs(dig[int(pin[0])-48]-1)+1;
        for(int i=1; i<4; i++){
            if(pin[i]==pin[i-1])
                c++;
            else
                c+=abs(dig[int(pin[i])-48]-dig[int(pin[i-1])-48])+1;
            //cout<<pin<<" "<<pin[i-1]<<" "<<pin[i]<<" "<<c<<nl;
        }
        cout<<c<<nl;
    }

}
