//Lubaba Hasan UAP
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string a, b="YES";
        cin>>a;
        int i=0;
        while(a[i]!='\0'){
            a[i] = toupper(a[i]);
            i++;
        }

        if(a==b)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}


