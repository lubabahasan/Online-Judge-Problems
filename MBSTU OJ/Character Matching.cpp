#define nl '\n'
#include<bits/stdc++.h>
//22201134 Lubaba Hasan

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        vector<char>v;
        for(int i=0; i<a.length(); i++){
            for(int j=i; j<b.length(); j++){
                if(a[i]==b[j] && b[j]!='L'){
                    v.push_back(b[j]);
                    b[j]='L';
                }
            }
        }

        sort(v.begin(), v.end());
        for(auto i=v.begin(); i!=v.end(); i++)
            cout<<*i;
        cout<<nl;
    }
    return 0;
}
