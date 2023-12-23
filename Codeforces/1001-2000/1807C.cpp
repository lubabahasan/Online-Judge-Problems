//Lubaba Hasan UAP
#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--){
        int len;     cin>>len;
        string word; cin>>word;
        if(len<2)
            cout<<"YES\n";
        else{
            int c, wc, flag = 0;
            for(int i=0; i<len; i++){
                c=0;
                wc=1;
                for(int j=i+1; j<len; j++){
                    if(word[i]==word[j]){
                        if(c%2==0){
                            flag=1;
                            break;
                        }
                        c=0;
                        wc++;
                    } else {
                        c++;
                    }
                }
                if(flag)
                    break;
            }
            if(flag)
                printf("NO\n");
            else
                printf("YES\n");
        }
    }
    return 0;
}


