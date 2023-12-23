#include<iostream>
//22201134 Lubaba Hasan
using namespace std;

int main(){
    short int t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        short int w=0, r=0;
        int o=a.length();
        for(short int i=0; i<a.length(); i++){
            if(a[i]=='W')
                w++;
            else
                r+=int(a[i])-'0';
        }
        cout<<o/6<<"."<<o%6<<" Over(s) "<<r<<" Run(s) "<<w<<" Wicket(s)";
        cout<<'\n';
    }
    return 0;
}

