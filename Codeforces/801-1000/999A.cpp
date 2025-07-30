#include<bits/stdc++.h>
using namespace std;
#define nl '\n'

int main(){
    int n, k;
    cin >> n >> k;

    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int i = 0, j = n-1, cnt = 0;

    while(i<=j){
        if(arr[i]>k && arr[j]>k){
            break;
        } else if(arr[i]<=k){
            cnt++;
            i++;
        } else{
            cnt++;
            j--;
        }
    }

    cout << cnt << nl;
}