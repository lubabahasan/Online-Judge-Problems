//Lubaba Hasan UAP
#define nl '\n'
#include<bits/stdc++.h>
using namespace std;

int main(){
    string a; cin>>a;
    string b;
    string decode="";
    for(int i=0; i<a.length(); i++){
        if(a[i]=='-'){
            b=a[i];
            b+=a[i+1];
            i++;
        } else {
            b=a[i];
        }

        if(b==".")
            decode+='0';
        else if(b=="--")
            decode+='2';
        else
            decode+='1';
    }
    cout<<decode<<'\n';
}
