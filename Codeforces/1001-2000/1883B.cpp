#include<bits/stdc++.h>
using namespace std;
#define nl '\n'

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        char a;
        cin>>n>>k;
        int odd=0, even=0;
        int alpha[26] = {0};  //97
        for(int i=0; i<n; i++){
            cin>>a;
            alpha[int(a)-97]++;
        }

        for(int i=0; i<26; i++){
            if(alpha[i]%2==0 || alpha[i]==3)
                even++;
            else if
                odd++;
        }
        if(odd-k)
    }

}
