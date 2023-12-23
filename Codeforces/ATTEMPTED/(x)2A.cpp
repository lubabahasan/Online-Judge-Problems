//Lubaba Hasan UAP
#include<bits/stdc++.h>
using namespace std;

int main(){
    short n;
    cin>>n;
    string arr[n],c;
    short points[n];
    for(short i=0; i<n; i++){
        cin>>arr[i]>>c;
        arr[i]+=c;
    }

    sort(arr, arr+n);

    for(short i=0; i<n ;i++){
        string a,b;
        a=arr[i].substr(0,arr[i].length()-1);
        b=arr[i+1].substr(0,arr[i+1].length()-1);
        cout<<a<<" "<<b<<endl;
    }
        //out<<arr[i]<<" ";

    for(short i=0; i<n-1; i++){

    }
    return 0;
}



