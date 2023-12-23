//Lubaba Hasan UAP
#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--){
        int len; cin>>len;
        string a; cin>>a;
        string arr[60];
        int c=0,l=0,r=0;
        for(int i=0; i<a.length(); i++){
            while(a[l]==a[l+1]){
                r++;
            }
            arr[c]=a.substr(l,r);
            c++;
            l=r;
        }

        for(int i=0; arr[i]!=""; i++){
            cout<<arr[i]<<endl;
        }
    }
    return 0;
}


