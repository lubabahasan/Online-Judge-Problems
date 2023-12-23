//Lubaba Hasan UAP
#define nl '\n'
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        int num, flag=0;

        int arr[101] = {0};
        cin>>num;
        arr[num]++;
        int mn=num, mx=num;

        for(int i=1; i<n; i++){
            cin>>num;
            arr[num]++;
            if(num>mx)
                mx=num;
            else if(num<mn)
                mn=num;
        }

        for(int i=mn; i<mx; i++){
            if(arr[i]==0){
                flag=1;
                break;
            }
        }

        if(flag)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
}
