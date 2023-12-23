#include<iostream>
//22201134 Lubaba Hasan

using namespace std;

int main(){
    short int t;
    cin>>t;
    while(t--){
        short int n; cin>>n;
        char pass[n];
        short int age[n];
        for(short int i=0; i<n; i++){
            cin>>pass[i];
        }
        short int mx=0;
        for(short int j=0; j<n; j++){
            cin>>age[j];
            if(age[j]>mx)
                mx=age[j];
        }
        for(short int k=0; k<n; k++){
            if(age[k]==mx)
                cout<<pass[k]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}
