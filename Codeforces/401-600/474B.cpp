#include<bits/stdc++.h>
using namespace std;

bool isOK(int mid, int arr[], int worm){
    if(arr[mid]<worm)
        return false;
    else
        return true;
}

int main(){
    int n;
    cin>>n;

    int arr[n];

    cin >> arr[0];
    int temp;
    for(int i=1; i<n; i++){
        cin >> temp;
        arr[i] = arr[i-1] + temp;
    }
    
    int m;
    cin >> m;
    int mid, worm;

    while(m--){
        cin >> worm;

        int lo = 0, hi = n;
        while(lo < hi){
            mid = (lo + hi) / 2;
            if(isOK(mid, arr, worm) == 0){
                lo = mid + 1;
            } else {
                hi = mid;
            }
            mid = (lo + hi) / 2;
        }

        cout << mid + 1 << '\n';    
        
    }

}