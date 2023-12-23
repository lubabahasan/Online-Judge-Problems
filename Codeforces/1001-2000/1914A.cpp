//Lubaba Hasan UAP
#define nl '\n'
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string a; cin>>a;

        int solved = 0;
        int arr[27] = {0};

        for(int i=0; i<n; i++){
            arr[int(a[i])-64]++;
        }

        for(int i=1; i<27; i++)
            if(arr[i]>=i)
                solved++;

        cout<<solved<<nl;
    }
}
