//Lubaba Hasan UAP
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int arr[n];
    cin>>arr[0];
    int mini=arr[0], mx=arr[0], min_ind, max_ind;
    for(int i=1; i<n; i++){
        cin>>arr[i];
        if(arr[i]>mx){
            mx=arr[i];
        } else if(arr[i]<=mini){
            mini=arr[i];
            min_ind = i;
        }
    }
    int c=0;

    for(int i=min_ind; i<n-1; i++){
        swap(arr[i],arr[i+1]);
        c++;
    }

    for(int i=0; i<n; i++){
        if(arr[i]==mx){
            max_ind=i;
            break;
        }
    }

    for(int i=max_ind; i>0; i--){
        swap(arr[i],arr[i-1]);
        c++;
    }

    cout<<c<<endl;

}

